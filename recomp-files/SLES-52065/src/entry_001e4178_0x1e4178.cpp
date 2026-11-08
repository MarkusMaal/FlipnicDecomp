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

// Function: entry_001e4178
// Address: 0x1e4178 - 0x1e41b0
void entry_001e4178_0x1e4178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e4178_0x1e4178");
#endif

    ctx->pc = 0x1e4178u;

    // 0x1e4178: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1e4178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1e417c: 0x2363c  dsll32      $a2, $v0, 24
    ctx->pc = 0x1e417cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1e4180: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1E4180u;
    {
        const bool branch_taken_0x1e4180 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4180u;
        // 0x1e4184: 0x6363f  dsra32      $a2, $a2, 24 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4180) {
            ctx->pc = 0x1E41D4u;
            return;
        }
    }
    ctx->pc = 0x1E4188u;
    // 0x1e4188: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x1e4188u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e418c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1e418cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1e4190: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1e4190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1e4194: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x1e4194u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1e4198: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E4198u;
    {
        const bool branch_taken_0x1e4198 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1E419Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4198u;
        // 0x1e419c: 0x24830001  addiu       $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4198) {
            ctx->pc = 0x1E41B0u;
            return;
        }
    }
    ctx->pc = 0x1E41A0u;
    // 0x1e41a0: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x1e41a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1e41a4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1e41a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1e41a8: 0xae030030  sw          $v1, 0x30($s0)
    ctx->pc = 0x1e41a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
    // 0x1e41ac: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1e41acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    ctx->pc = 0x1e41b0u;
}
