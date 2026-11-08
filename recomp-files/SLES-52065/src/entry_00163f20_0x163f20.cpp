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

// Function: entry_00163f20
// Address: 0x163f20 - 0x163f58
void entry_00163f20_0x163f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00163f20_0x163f20");
#endif

    switch (ctx->pc) {
        case 0x163f3cu: goto label_163f3c;
        default: break;
    }

    ctx->pc = 0x163f20u;

    // 0x163f20: 0x8e620340  lw          $v0, 0x340($s3)
    ctx->pc = 0x163f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 832)));
    // 0x163f24: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x163f24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x163f28: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x163f28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163f2c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x163f2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163f30: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x163f30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x163f34: 0xc055b3c  jal         func_156CF0
    ctx->pc = 0x163F34u;
    SET_GPR_U32(ctx, 31, 0x163F3Cu);
    ctx->pc = 0x163F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163F34u;
    // 0x163f38: 0x2022821  addu        $a1, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156CF0u, 0x163F34u, 0x163F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163F3Cu;
label_163f3c:
    // 0x163f3c: 0x8e620340  lw          $v0, 0x340($s3)
    ctx->pc = 0x163f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 832)));
    // 0x163f40: 0x18400033  blez        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x163F40u;
    {
        const bool branch_taken_0x163f40 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x163F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163F40u;
        // 0x163f44: 0x521821  addu        $v1, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163f40) {
            ctx->pc = 0x164010u;
            return;
        }
    }
    ctx->pc = 0x163F48u;
    // 0x163f48: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x163f48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x163f4c: 0xae630340  sw          $v1, 0x340($s3)
    ctx->pc = 0x163f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 832), GPR_U32(ctx, 3));
    // 0x163f50: 0x1000ff54  b           . + 4 + (-0xAC << 2)
    ctx->pc = 0x163F50u;
    {
        const bool branch_taken_0x163f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163F50u;
        // 0x163f54: 0xae620344  sw          $v0, 0x344($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 836), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163f50) {
            ctx->pc = 0x163CA4u;
            return;
        }
    }
    ctx->pc = 0x163F58u;
}
