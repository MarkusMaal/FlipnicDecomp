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

// Function: entry_00159864
// Address: 0x159864 - 0x1598a0
void entry_00159864_0x159864(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00159864_0x159864");
#endif

    switch (ctx->pc) {
        case 0x15989cu: goto label_15989c;
        default: break;
    }

    ctx->pc = 0x159864u;

    // 0x159864: 0x24020099  addiu       $v0, $zero, 0x99
    ctx->pc = 0x159864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
    // 0x159868: 0x16020011  bne         $s0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x159868u;
    {
        const bool branch_taken_0x159868 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x159868) {
            ctx->pc = 0x1598B0u;
            return;
        }
    }
    ctx->pc = 0x159870u;
    // 0x159870: 0xc62102f0  lwc1        $f1, 0x2F0($s1)
    ctx->pc = 0x159870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x159874: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x159874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x159878: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x159878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x15987c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15987cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159880: 0x0  nop
    ctx->pc = 0x159880u;
    // NOP
    // 0x159884: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x159884u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x159888: 0x0  nop
    ctx->pc = 0x159888u;
    // NOP
    // 0x15988c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x15988Cu;
    {
        const bool branch_taken_0x15988c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x159890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15988Cu;
        // 0x159890: 0x3c023c23  lui         $v0, 0x3C23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15988c) {
            ctx->pc = 0x1598A0u;
            return;
        }
    }
    ctx->pc = 0x159894u;
    // 0x159894: 0xc042118  jal         func_108460
    ctx->pc = 0x159894u;
    SET_GPR_U32(ctx, 31, 0x15989Cu);
    ctx->pc = 0x159898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159894u;
    // 0x159898: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x159894u, 0x15989Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15989Cu;
label_15989c:
    // 0x15989c: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x15989cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    ctx->pc = 0x1598a0u;
}
