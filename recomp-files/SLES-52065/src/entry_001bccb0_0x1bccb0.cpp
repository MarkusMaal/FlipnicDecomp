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

// Function: entry_001bccb0
// Address: 0x1bccb0 - 0x1bcd00
void entry_001bccb0_0x1bccb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bccb0_0x1bccb0");
#endif

    switch (ctx->pc) {
        case 0x1bccb8u: goto label_1bccb8;
        default: break;
    }

    ctx->pc = 0x1bccb0u;

    // 0x1bccb0: 0xc04b220  jal         func_12C880
    ctx->pc = 0x1BCCB0u;
    SET_GPR_U32(ctx, 31, 0x1BCCB8u);
    ctx->pc = 0x12C880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C880u, 0x1BCCB0u, 0x1BCCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCCB8u;
label_1bccb8:
    // 0x1bccb8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1bccb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bccbc: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1bccbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1bccc0: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x1bccc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x1bccc4: 0x27a30074  addiu       $v1, $sp, 0x74
    ctx->pc = 0x1bccc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x1bccc8: 0x24423058  addiu       $v0, $v0, 0x3058
    ctx->pc = 0x1bccc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12376));
    // 0x1bcccc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1bccccu;
    SET_GPR_S32(ctx, 4, (int16_t)FAST_READ16(0x213058u));
    // 0x1bccd0: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x1bccd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x1bccd4: 0xa4a40000  sh          $a0, 0x0($a1)
    ctx->pc = 0x1bccd4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x1bccd8: 0x24423060  addiu       $v0, $v0, 0x3060
    ctx->pc = 0x1bccd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12384));
    // 0x1bccdc: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x1bccdcu;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x213060u));
    // 0x1bcce0: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x1bcce0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1bcce4: 0x8ea2001c  lw          $v0, 0x1C($s5)
    ctx->pc = 0x1bcce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x1bcce8: 0x8ea30080  lw          $v1, 0x80($s5)
    ctx->pc = 0x1bcce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 128)));
    // 0x1bccec: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1bccecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bccf0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BCCF0u;
    {
        const bool branch_taken_0x1bccf0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1BCCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCCF0u;
        // 0x1bccf4: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bccf0) {
            ctx->pc = 0x1BCD00u;
            return;
        }
    }
    ctx->pc = 0x1BCCF8u;
    // 0x1bccf8: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x1bccf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1bccfc: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1bccfcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    ctx->pc = 0x1bcd00u;
}
