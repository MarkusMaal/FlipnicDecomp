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

// Function: entry_001cf44c
// Address: 0x1cf44c - 0x1cf494
void entry_001cf44c_0x1cf44c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf44c_0x1cf44c");
#endif

    switch (ctx->pc) {
        case 0x1cf468u: goto label_1cf468;
        case 0x1cf480u: goto label_1cf480;
        default: break;
    }

    ctx->pc = 0x1cf44cu;

    // 0x1cf44c: 0x3c0342a0  lui         $v1, 0x42A0
    ctx->pc = 0x1cf44cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17056 << 16));
    // 0x1cf450: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x1cf450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x1cf454: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1cf454u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cf458: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1cf458u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1cf45c: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1cf45cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1cf460: 0xc06282c  jal         func_18A0B0
    ctx->pc = 0x1CF460u;
    SET_GPR_U32(ctx, 31, 0x1CF468u);
    ctx->pc = 0x1CF464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF460u;
    // 0x1cf464: 0x8ea40060  lw          $a0, 0x60($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A0B0u, 0x1CF460u, 0x1CF468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF468u;
label_1cf468:
    // 0x1cf468: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cf468u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cf46c: 0xc42cfbc0  lwc1        $f12, -0x440($at)
    ctx->pc = 0x1cf46cu;
    { uint32_t bits = FAST_READ32(0x36FBC0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cf470: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cf470u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cf474: 0xc42dfbd0  lwc1        $f13, -0x430($at)
    ctx->pc = 0x1cf474u;
    { uint32_t bits = FAST_READ32(0x36FBD0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1cf478: 0xc06285c  jal         func_18A170
    ctx->pc = 0x1CF478u;
    SET_GPR_U32(ctx, 31, 0x1CF480u);
    ctx->pc = 0x1CF47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF478u;
    // 0x1cf47c: 0x8ea40060  lw          $a0, 0x60($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A170u, 0x1CF478u, 0x1CF480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF480u;
label_1cf480:
    // 0x1cf480: 0x8ea20078  lw          $v0, 0x78($s5)
    ctx->pc = 0x1cf480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 120)));
    // 0x1cf484: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x1cf484u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cf488: 0x14510002  bne         $v0, $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1CF488u;
    {
        const bool branch_taken_0x1cf488 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x1CF48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF488u;
        // 0x1cf48c: 0x27a4008c  addiu       $a0, $sp, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf488) {
            ctx->pc = 0x1CF494u;
            return;
        }
    }
    ctx->pc = 0x1CF490u;
    // 0x1cf490: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x1cf490u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x1cf494u;
}
