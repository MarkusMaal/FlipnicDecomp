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

// Function: entry_001b1ae0
// Address: 0x1b1ae0 - 0x1b1b1c
void entry_001b1ae0_0x1b1ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1ae0_0x1b1ae0");
#endif

    switch (ctx->pc) {
        case 0x1b1ae8u: goto label_1b1ae8;
        default: break;
    }

    ctx->pc = 0x1b1ae0u;

    // 0x1b1ae0: 0xc06d14c  jal         func_1B4530
    ctx->pc = 0x1B1AE0u;
    SET_GPR_U32(ctx, 31, 0x1B1AE8u);
    ctx->pc = 0x1B1AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1AE0u;
    // 0x1b1ae4: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4530u, 0x1B1AE0u, 0x1B1AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1AE8u;
label_1b1ae8:
    // 0x1b1ae8: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1b1ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1b1aec: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1b1aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x1b1af0: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x1b1af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1b1af4: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1b1af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1b1af8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1b1af8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b1afc: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1b1afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1b1b00: 0x32043  sra         $a0, $v1, 1
    ctx->pc = 0x1b1b00u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 1));
    // 0x1b1b04: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1b1b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x1b1b08: 0x8fa203d0  lw          $v0, 0x3D0($sp)
    ctx->pc = 0x1b1b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 976)));
    // 0x1b1b0c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B1B0Cu;
    {
        const bool branch_taken_0x1b1b0c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1B1B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1B0Cu;
        // 0x1b1b10: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1b0c) {
            ctx->pc = 0x1B1B1Cu;
            return;
        }
    }
    ctx->pc = 0x1B1B14u;
    // 0x1b1b14: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1b1b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b1b18: 0x22043  sra         $a0, $v0, 1
    ctx->pc = 0x1b1b18u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 1));
    ctx->pc = 0x1b1b1cu;
}
