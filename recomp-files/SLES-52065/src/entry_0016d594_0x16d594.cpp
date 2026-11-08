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

// Function: entry_0016d594
// Address: 0x16d594 - 0x16d5bc
void entry_0016d594_0x16d594(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016d594_0x16d594");
#endif

    ctx->pc = 0x16d594u;

    // 0x16d594: 0x14830009  bne         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x16D594u;
    {
        const bool branch_taken_0x16d594 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x16d594) {
            ctx->pc = 0x16D5BCu;
            return;
        }
    }
    ctx->pc = 0x16D59Cu;
    // 0x16d59c: 0xae0501d4  sw          $a1, 0x1D4($s0)
    ctx->pc = 0x16d59cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 5));
    // 0x16d5a0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x16d5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x16d5a4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x16d5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16d5a8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x16d5a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x16d5ac: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16d5acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16d5b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16d5b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d5b4: 0xc0425a4  jal         func_109690
    ctx->pc = 0x16D5B4u;
    SET_GPR_U32(ctx, 31, 0x16D5BCu);
    ctx->pc = 0x16D5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D5B4u;
    // 0x16d5b8: 0xa066002b  sb          $a2, 0x2B($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 43), (uint8_t)GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x16D5B4u, 0x16D5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D5BCu;
}
