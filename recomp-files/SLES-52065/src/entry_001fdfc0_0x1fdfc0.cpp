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

// Function: entry_001fdfc0
// Address: 0x1fdfc0 - 0x1fdff4
void entry_001fdfc0_0x1fdfc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fdfc0_0x1fdfc0");
#endif

    ctx->pc = 0x1fdfc0u;

    // 0x1fdfc0: 0x50a0000d  beql        $a1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1FDFC0u;
    {
        const bool branch_taken_0x1fdfc0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fdfc0) {
            ctx->pc = 0x1FDFC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FDFC0u;
            // 0x1fdfc4: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FDFF8u;
            return;
        }
    }
    ctx->pc = 0x1FDFC8u;
    // 0x1fdfc8: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x1fdfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x1fdfcc: 0x8e070010  lw          $a3, 0x10($s0)
    ctx->pc = 0x1fdfccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1fdfd0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1fdfd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1fdfd4: 0x478823  subu        $s1, $v0, $a3
    ctx->pc = 0x1fdfd4u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1fdfd8: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x1fdfd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1fdfdc: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x1fdfdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1fdfe0: 0x243902d  daddu       $s2, $s2, $v1
    ctx->pc = 0x1fdfe0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 3));
    // 0x1fdfe4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1fdfe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1fdfe8: 0x2248821  addu        $s1, $s1, $a0
    ctx->pc = 0x1fdfe8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x1fdfec: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1FDFECu;
    {
        const bool branch_taken_0x1fdfec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDFECu;
        // 0x1fdff0: 0x242902f  dsubu       $s2, $s2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdfec) {
            ctx->pc = 0x1FE014u;
            return;
        }
    }
    ctx->pc = 0x1FDFF4u;
}
