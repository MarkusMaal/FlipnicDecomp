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

// Function: entry_001ee3f0
// Address: 0x1ee3f0 - 0x1ee430
void entry_001ee3f0_0x1ee3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ee3f0_0x1ee3f0");
#endif

    switch (ctx->pc) {
        case 0x1ee410u: goto label_1ee410;
        case 0x1ee420u: goto label_1ee420;
        case 0x1ee428u: goto label_1ee428;
        default: break;
    }

    ctx->pc = 0x1ee3f0u;

    // 0x1ee3f0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1ee3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1ee3f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ee3f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee3f8: 0x3484000c  ori         $a0, $a0, 0xC
    ctx->pc = 0x1ee3f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)12);
    // 0x1ee3fc: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1ee3fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1ee400: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ee400u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee404: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ee404u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee408: 0xc07b704  jal         func_1EDC10
    ctx->pc = 0x1EE408u;
    SET_GPR_U32(ctx, 31, 0x1EE410u);
    ctx->pc = 0x1EE40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE408u;
    // 0x1ee40c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDC10u, 0x1EE408u, 0x1EE410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE410u;
label_1ee410:
    // 0x1ee410: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1EE410u;
    {
        const bool branch_taken_0x1ee410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ee410) {
            ctx->pc = 0x1EE430u;
            return;
        }
    }
    ctx->pc = 0x1EE418u;
    // 0x1ee418: 0xc07b836  jal         func_1EE0D8
    ctx->pc = 0x1EE418u;
    SET_GPR_U32(ctx, 31, 0x1EE420u);
    ctx->pc = 0x1EE41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE418u;
    // 0x1ee41c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE0D8u, 0x1EE418u, 0x1EE420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE420u;
label_1ee420:
    // 0x1ee420: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1EE420u;
    SET_GPR_U32(ctx, 31, 0x1EE428u);
    ctx->pc = 0x1EE424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE420u;
    // 0x1ee424: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1EE420u, 0x1EE428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE428u;
label_1ee428:
    // 0x1ee428: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1EE428u;
    {
        const bool branch_taken_0x1ee428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE428u;
        // 0x1ee42c: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee428) {
            ctx->pc = 0x1EE484u;
            return;
        }
    }
    ctx->pc = 0x1EE430u;
}
