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

// Function: caseD_1c
// Address: 0x109ecc - 0x109f00
void caseD_1c_0x109ecc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1c_0x109ecc");
#endif

    switch (ctx->pc) {
        case 0x109edcu: goto label_109edc;
        default: break;
    }

    ctx->pc = 0x109eccu;

    // 0x109ecc: 0x86250004  lh          $a1, 0x4($s1)
    ctx->pc = 0x109eccu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x109ed0: 0x8f848218  lw          $a0, -0x7DE8($gp)
    ctx->pc = 0x109ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x109ed4: 0xc057040  jal         func_15C100
    ctx->pc = 0x109ED4u;
    SET_GPR_U32(ctx, 31, 0x109EDCu);
    ctx->pc = 0x109ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109ED4u;
    // 0x109ed8: 0x86260002  lh          $a2, 0x2($s1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x109ED4u, 0x109EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109EDCu;
label_109edc:
    // 0x109edc: 0x86330006  lh          $s3, 0x6($s1)
    ctx->pc = 0x109edcu;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x109ee0: 0x6610007  bgez        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x109EE0u;
    {
        const bool branch_taken_0x109ee0 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x109EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109EE0u;
        // 0x109ee4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109ee0) {
            ctx->pc = 0x109F00u;
            return;
        }
    }
    ctx->pc = 0x109EE8u;
    // 0x109ee8: 0x8f838218  lw          $v1, -0x7DE8($gp)
    ctx->pc = 0x109ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x109eec: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x109eecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x109ef0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x109ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x109ef4: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x109ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x109ef8: 0x844201f4  lh          $v0, 0x1F4($v0)
    ctx->pc = 0x109ef8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 500)));
    // 0x109efc: 0x2453ffff  addiu       $s3, $v0, -0x1
    ctx->pc = 0x109efcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    ctx->pc = 0x109f00u;
}
