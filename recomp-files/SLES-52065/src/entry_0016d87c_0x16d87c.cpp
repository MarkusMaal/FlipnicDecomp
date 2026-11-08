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

// Function: entry_0016d87c
// Address: 0x16d87c - 0x16d8b8
void entry_0016d87c_0x16d87c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016d87c_0x16d87c");
#endif

    switch (ctx->pc) {
        case 0x16d8b0u: goto label_16d8b0;
        default: break;
    }

    ctx->pc = 0x16d87cu;

    // 0x16d87c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x16d87cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x16d880: 0x16030015  bne         $s0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x16D880u;
    {
        const bool branch_taken_0x16d880 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x16d880) {
            ctx->pc = 0x16D8D8u;
            return;
        }
    }
    ctx->pc = 0x16D888u;
    // 0x16d888: 0x8e2501d4  lw          $a1, 0x1D4($s1)
    ctx->pc = 0x16d888u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 468)));
    // 0x16d88c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16d88cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16d890: 0x14a30009  bne         $a1, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x16D890u;
    {
        const bool branch_taken_0x16d890 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x16D894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D890u;
        // 0x16d894: 0x28a30003  slti        $v1, $a1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d890) {
            ctx->pc = 0x16D8B8u;
            return;
        }
    }
    ctx->pc = 0x16D898u;
    // 0x16d898: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x16d898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x16d89c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x16d89cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x16d8a0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16d8a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16d8a4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x16d8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16d8a8: 0xc0425a4  jal         func_109690
    ctx->pc = 0x16D8A8u;
    SET_GPR_U32(ctx, 31, 0x16D8B0u);
    ctx->pc = 0x16D8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D8A8u;
    // 0x16d8ac: 0xa060002b  sb          $zero, 0x2B($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 43), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x16D8A8u, 0x16D8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D8B0u;
label_16d8b0:
    // 0x16d8b0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x16D8B0u;
    {
        const bool branch_taken_0x16d8b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d8b0) {
            ctx->pc = 0x16D8D8u;
            return;
        }
    }
    ctx->pc = 0x16D8B8u;
}
