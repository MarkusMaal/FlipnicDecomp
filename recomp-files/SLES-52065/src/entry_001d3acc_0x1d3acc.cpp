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

// Function: entry_001d3acc
// Address: 0x1d3acc - 0x1d3b24
void entry_001d3acc_0x1d3acc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d3acc_0x1d3acc");
#endif

    switch (ctx->pc) {
        case 0x1d3ad4u: goto label_1d3ad4;
        case 0x1d3af4u: goto label_1d3af4;
        default: break;
    }

    ctx->pc = 0x1d3accu;

    // 0x1d3acc: 0xc081daa  jal         func_2076A8
    ctx->pc = 0x1D3ACCu;
    SET_GPR_U32(ctx, 31, 0x1D3AD4u);
    ctx->pc = 0x1D3AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3ACCu;
    // 0x1d3ad0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2076A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2076A8u, 0x1D3ACCu, 0x1D3AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3AD4u;
label_1d3ad4:
    // 0x1d3ad4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1d3ad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d3ad8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1d3ad8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1d3adc: 0xde030000  ld          $v1, 0x0($s0)
    ctx->pc = 0x1d3adcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d3ae0: 0x551004  sllv        $v0, $s5, $v0
    ctx->pc = 0x1d3ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d3ae4: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1d3ae4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1d3ae8: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x1d3ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x1d3aec: 0xc078258  jal         func_1E0960
    ctx->pc = 0x1D3AECu;
    SET_GPR_U32(ctx, 31, 0x1D3AF4u);
    ctx->pc = 0x1D3AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3AECu;
    // 0x1d3af0: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0960u, 0x1D3AECu, 0x1D3AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3AF4u;
label_1d3af4:
    // 0x1d3af4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d3af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d3af8: 0xde2200a0  ld          $v0, 0xA0($s1)
    ctx->pc = 0x1d3af8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 160)));
    // 0x1d3afc: 0x2831814  dsllv       $v1, $v1, $s4
    ctx->pc = 0x1d3afcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 20) & 0x3F));
    // 0x1d3b00: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x1d3b00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1d3b04: 0x276202a  slt         $a0, $s3, $s6
    ctx->pc = 0x1d3b04u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x1d3b08: 0x8fa70020  lw          $a3, 0x20($sp)
    ctx->pc = 0x1d3b08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d3b0c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1d3b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1d3b10: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1d3b10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1d3b14: 0xafa50024  sw          $a1, 0x24($sp)
    ctx->pc = 0x1d3b14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 5));
    // 0x1d3b18: 0x3c7f021  addu        $fp, $fp, $a3
    ctx->pc = 0x1d3b18u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 7)));
    // 0x1d3b1c: 0x1480ff9e  bnez        $a0, . + 4 + (-0x62 << 2)
    ctx->pc = 0x1D3B1Cu;
    {
        const bool branch_taken_0x1d3b1c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3B1Cu;
        // 0x1d3b20: 0xfe2200a0  sd          $v0, 0xA0($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 160), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3b1c) {
            ctx->pc = 0x1D3998u;
            return;
        }
    }
    ctx->pc = 0x1D3B24u;
}
