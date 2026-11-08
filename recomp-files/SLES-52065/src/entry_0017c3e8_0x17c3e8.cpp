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

// Function: entry_0017c3e8
// Address: 0x17c3e8 - 0x17c410
void entry_0017c3e8_0x17c3e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017c3e8_0x17c3e8");
#endif

    switch (ctx->pc) {
        case 0x17c404u: goto label_17c404;
        default: break;
    }

    ctx->pc = 0x17c3e8u;

    // 0x17c3e8: 0x8e2301d4  lw          $v1, 0x1D4($s1)
    ctx->pc = 0x17c3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 468)));
    // 0x17c3ec: 0x14650008  bne         $v1, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x17C3ECu;
    {
        const bool branch_taken_0x17c3ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x17c3ec) {
            ctx->pc = 0x17C410u;
            return;
        }
    }
    ctx->pc = 0x17C3F4u;
    // 0x17c3f4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x17c3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x17c3f8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x17c3f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17c3fc: 0xc0425a4  jal         func_109690
    ctx->pc = 0x17C3FCu;
    SET_GPR_U32(ctx, 31, 0x17C404u);
    ctx->pc = 0x17C400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C3FCu;
    // 0x17c400: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x17C3FCu, 0x17C404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C404u;
label_17c404:
    // 0x17c404: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17c404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c408: 0xc042118  jal         func_108460
    ctx->pc = 0x17C408u;
    SET_GPR_U32(ctx, 31, 0x17C410u);
    ctx->pc = 0x17C40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C408u;
    // 0x17c40c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x17C408u, 0x17C410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C410u;
}
