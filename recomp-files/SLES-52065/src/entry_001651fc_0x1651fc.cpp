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

// Function: entry_001651fc
// Address: 0x1651fc - 0x16523c
void entry_001651fc_0x1651fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001651fc_0x1651fc");
#endif

    switch (ctx->pc) {
        case 0x165220u: goto label_165220;
        default: break;
    }

    ctx->pc = 0x1651fcu;

    // 0x1651fc: 0x0  nop
    ctx->pc = 0x1651fcu;
    // NOP
    // 0x165200: 0x8e620340  lw          $v0, 0x340($s3)
    ctx->pc = 0x165200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 832)));
    // 0x165204: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x165204u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x165208: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x165208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16520c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x16520cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x165210: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x165210u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165214: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x165214u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x165218: 0xc055b3c  jal         func_156CF0
    ctx->pc = 0x165218u;
    SET_GPR_U32(ctx, 31, 0x165220u);
    ctx->pc = 0x16521Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165218u;
    // 0x16521c: 0x2022821  addu        $a1, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156CF0u, 0x165218u, 0x165220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165220u;
label_165220:
    // 0x165220: 0x8e620340  lw          $v0, 0x340($s3)
    ctx->pc = 0x165220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 832)));
    // 0x165224: 0x18400034  blez        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x165224u;
    {
        const bool branch_taken_0x165224 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x165228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165224u;
        // 0x165228: 0x521821  addu        $v1, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165224) {
            ctx->pc = 0x1652F8u;
            return;
        }
    }
    ctx->pc = 0x16522Cu;
    // 0x16522c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16522cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x165230: 0xae630340  sw          $v1, 0x340($s3)
    ctx->pc = 0x165230u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 832), GPR_U32(ctx, 3));
    // 0x165234: 0x1000ff53  b           . + 4 + (-0xAD << 2)
    ctx->pc = 0x165234u;
    {
        const bool branch_taken_0x165234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165234u;
        // 0x165238: 0xae620344  sw          $v0, 0x344($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 836), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165234) {
            ctx->pc = 0x164F84u;
            return;
        }
    }
    ctx->pc = 0x16523Cu;
}
