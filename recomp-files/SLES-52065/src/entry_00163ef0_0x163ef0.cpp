#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_00163ef0
// Address: 0x163ef0 - 0x163f20
void entry_00163ef0_0x163ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00163ef0_0x163ef0");
#endif

    switch (ctx->pc) {
        case 0x163f08u: goto label_163f08;
        default: break;
    }

    ctx->pc = 0x163ef0u;

    // 0x163ef0: 0x8683021a  lh          $v1, 0x21A($s4)
    ctx->pc = 0x163ef0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 538)));
    // 0x163ef4: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x163ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x163ef8: 0x14620045  bne         $v1, $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x163EF8u;
    {
        const bool branch_taken_0x163ef8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x163EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163EF8u;
        // 0x163efc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163ef8) {
            ctx->pc = 0x164010u;
            return;
        }
    }
    ctx->pc = 0x163F00u;
    // 0x163f00: 0xc055c40  jal         func_157100
    ctx->pc = 0x163F00u;
    SET_GPR_U32(ctx, 31, 0x163F08u);
    ctx->pc = 0x157100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157100u, 0x163F00u, 0x163F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163F08u;
label_163f08:
    // 0x163f08: 0x2623fffe  addiu       $v1, $s1, -0x2
    ctx->pc = 0x163f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967294));
    // 0x163f0c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x163f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x163f10: 0xae630340  sw          $v1, 0x340($s3)
    ctx->pc = 0x163f10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 832), GPR_U32(ctx, 3));
    // 0x163f14: 0x129023  negu        $s2, $s2
    ctx->pc = 0x163f14u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 18)));
    // 0x163f18: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x163F18u;
    {
        const bool branch_taken_0x163f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163F18u;
        // 0x163f1c: 0xae620344  sw          $v0, 0x344($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 836), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163f18) {
            ctx->pc = 0x164010u;
            return;
        }
    }
    ctx->pc = 0x163F20u;
}
