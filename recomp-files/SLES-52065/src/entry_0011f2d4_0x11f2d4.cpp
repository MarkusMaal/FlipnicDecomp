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

// Function: entry_0011f2d4
// Address: 0x11f2d4 - 0x11f328
void entry_0011f2d4_0x11f2d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f2d4_0x11f2d4");
#endif

    ctx->pc = 0x11f2d4u;

label_11f2d4:
    // 0x11f2d4: 0x863821  addu        $a3, $a0, $a2
    ctx->pc = 0x11f2d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x11f2d8: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x11f2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x11f2dc: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x11f2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x11f2e0: 0x28a30010  slti        $v1, $a1, 0x10
    ctx->pc = 0x11f2e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x11f2e4: 0xace00044  sw          $zero, 0x44($a3)
    ctx->pc = 0x11f2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 68), GPR_U32(ctx, 0));
    // 0x11f2e8: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x11f2e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x11f2ec: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x11f2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
    // 0x11f2f0: 0xace00048  sw          $zero, 0x48($a3)
    ctx->pc = 0x11f2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 72), GPR_U32(ctx, 0));
    // 0x11f2f4: 0xace0000c  sw          $zero, 0xC($a3)
    ctx->pc = 0x11f2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
    // 0x11f2f8: 0xace0004c  sw          $zero, 0x4C($a3)
    ctx->pc = 0x11f2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 76), GPR_U32(ctx, 0));
    // 0x11f2fc: 0xace00010  sw          $zero, 0x10($a3)
    ctx->pc = 0x11f2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 0));
    // 0x11f300: 0xace00050  sw          $zero, 0x50($a3)
    ctx->pc = 0x11f300u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 80), GPR_U32(ctx, 0));
    // 0x11f304: 0xace00014  sw          $zero, 0x14($a3)
    ctx->pc = 0x11f304u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 0));
    // 0x11f308: 0xace00054  sw          $zero, 0x54($a3)
    ctx->pc = 0x11f308u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 84), GPR_U32(ctx, 0));
    // 0x11f30c: 0xace00018  sw          $zero, 0x18($a3)
    ctx->pc = 0x11f30cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 0));
    // 0x11f310: 0xace00058  sw          $zero, 0x58($a3)
    ctx->pc = 0x11f310u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 88), GPR_U32(ctx, 0));
    // 0x11f314: 0xace0001c  sw          $zero, 0x1C($a3)
    ctx->pc = 0x11f314u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 0));
    // 0x11f318: 0xace0005c  sw          $zero, 0x5C($a3)
    ctx->pc = 0x11f318u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 92), GPR_U32(ctx, 0));
    // 0x11f31c: 0xace00020  sw          $zero, 0x20($a3)
    ctx->pc = 0x11f31cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 32), GPR_U32(ctx, 0));
    // 0x11f320: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x11F320u;
    {
        const bool branch_taken_0x11f320 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F320u;
        // 0x11f324: 0xace00060  sw          $zero, 0x60($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 96), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f320) {
            ctx->pc = 0x11F2D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11f2d4;
        }
    }
    ctx->pc = 0x11F328u;
}
