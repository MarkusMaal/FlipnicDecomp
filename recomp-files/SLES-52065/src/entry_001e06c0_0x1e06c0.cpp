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

// Function: entry_001e06c0
// Address: 0x1e06c0 - 0x1e0710
void entry_001e06c0_0x1e06c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e06c0_0x1e06c0");
#endif

    ctx->pc = 0x1e06c0u;

label_1e06c0:
    // 0x1e06c0: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1e06c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1e06c4: 0x631f8  dsll        $a2, $a2, 7
    ctx->pc = 0x1e06c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 7);
    // 0x1e06c8: 0x8e250060  lw          $a1, 0x60($s1)
    ctx->pc = 0x1e06c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x1e06cc: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x1e06ccu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e06d0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1e06d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1e06d4: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x1e06d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e06d8: 0x30840080  andi        $a0, $a0, 0x80
    ctx->pc = 0x1e06d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
    // 0x1e06dc: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x1e06dcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x1e06e0: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x1e06e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x1e06e4: 0x1480fff6  bnez        $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1E06E4u;
    {
        const bool branch_taken_0x1e06e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E06E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E06E4u;
        // 0x1e06e8: 0xc2302d  daddu       $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e06e4) {
            ctx->pc = 0x1E06C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e06c0;
        }
    }
    ctx->pc = 0x1E06ECu;
    // 0x1e06ec: 0x8e230060  lw          $v1, 0x60($s1)
    ctx->pc = 0x1e06ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x1e06f0: 0x6383c  dsll32      $a3, $a2, 0
    ctx->pc = 0x1e06f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1e06f4: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x1e06f4u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x1e06f8: 0x10e0000f  beqz        $a3, . + 4 + (0xF << 2)
    ctx->pc = 0x1E06F8u;
    {
        const bool branch_taken_0x1e06f8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E06FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E06F8u;
        // 0x1e06fc: 0x60402d  daddu       $t0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e06f8) {
            ctx->pc = 0x1E0738u;
            return;
        }
    }
    ctx->pc = 0x1E0700u;
    // 0x1e0700: 0x3c0a0039  lui         $t2, 0x39
    ctx->pc = 0x1e0700u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)57 << 16));
    // 0x1e0704: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x1e0704u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
    // 0x1e0708: 0x2549a310  addiu       $t1, $t2, -0x5CF0
    ctx->pc = 0x1e0708u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), 4294943504));
    // 0x1e070c: 0x24a5ab10  addiu       $a1, $a1, -0x54F0
    ctx->pc = 0x1e070cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945552));
    ctx->pc = 0x1e0710u;
}
