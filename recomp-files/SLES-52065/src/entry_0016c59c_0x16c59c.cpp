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

// Function: entry_0016c59c
// Address: 0x16c59c - 0x16c5c8
void entry_0016c59c_0x16c59c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016c59c_0x16c59c");
#endif

    switch (ctx->pc) {
        case 0x16c5a4u: goto label_16c5a4;
        default: break;
    }

    ctx->pc = 0x16c59cu;

    // 0x16c59c: 0xc05b040  jal         func_16C100
    ctx->pc = 0x16C59Cu;
    SET_GPR_U32(ctx, 31, 0x16C5A4u);
    ctx->pc = 0x16C5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C59Cu;
    // 0x16c5a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C100u, 0x16C59Cu, 0x16C5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C5A4u;
label_16c5a4:
    // 0x16c5a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16c5a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c5a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16c5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16c5ac: 0x16020006  bne         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16C5ACu;
    {
        const bool branch_taken_0x16c5ac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x16c5ac) {
            ctx->pc = 0x16C5C8u;
            return;
        }
    }
    ctx->pc = 0x16C5B4u;
    // 0x16c5b4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x16c5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x16c5b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16c5b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c5bc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16c5bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16c5c0: 0xc0425a4  jal         func_109690
    ctx->pc = 0x16C5C0u;
    SET_GPR_U32(ctx, 31, 0x16C5C8u);
    ctx->pc = 0x16C5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C5C0u;
    // 0x16c5c4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x16C5C0u, 0x16C5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C5C8u;
}
