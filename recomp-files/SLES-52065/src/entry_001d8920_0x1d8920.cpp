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

// Function: entry_001d8920
// Address: 0x1d8920 - 0x1d8948
void entry_001d8920_0x1d8920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d8920_0x1d8920");
#endif

    switch (ctx->pc) {
        case 0x1d8934u: goto label_1d8934;
        default: break;
    }

    ctx->pc = 0x1d8920u;

label_1d8920:
    // 0x1d8920: 0x2631fffc  addiu       $s1, $s1, -0x4
    ctx->pc = 0x1d8920u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    // 0x1d8924: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1d8924u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1d8928: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1d8928u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1d892c: 0xc07769a  jal         func_1DDA68
    ctx->pc = 0x1D892Cu;
    SET_GPR_U32(ctx, 31, 0x1D8934u);
    ctx->pc = 0x1D8930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D892Cu;
    // 0x1d8930: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DDA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DDA68u, 0x1D892Cu, 0x1D8934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8934u;
label_1d8934:
    // 0x1d8934: 0x603fffa  bgezl       $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D8934u;
    {
        const bool branch_taken_0x1d8934 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1d8934) {
            ctx->pc = 0x1D8938u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D8934u;
            // 0x1d8938: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D8920u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d8920;
        }
    }
    ctx->pc = 0x1D893Cu;
    // 0x1d893c: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x1D893Cu;
    {
        const bool branch_taken_0x1d893c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D893Cu;
        // 0x1d8940: 0xdfb000c0  ld          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d893c) {
            ctx->pc = 0x1D8A88u;
            return;
        }
    }
    ctx->pc = 0x1D8944u;
    // 0x1d8944: 0x0  nop
    ctx->pc = 0x1d8944u;
    // NOP
    ctx->pc = 0x1d8948u;
}
