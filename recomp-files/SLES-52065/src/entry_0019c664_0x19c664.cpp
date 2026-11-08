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

// Function: entry_0019c664
// Address: 0x19c664 - 0x19c6c4
void entry_0019c664_0x19c664(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019c664_0x19c664");
#endif

    switch (ctx->pc) {
        case 0x19c69cu: goto label_19c69c;
        case 0x19c6b8u: goto label_19c6b8;
        default: break;
    }

    ctx->pc = 0x19c664u;

    // 0x19c664: 0x8e030900  lw          $v1, 0x900($s0)
    ctx->pc = 0x19c664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2304)));
    // 0x19c668: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x19C668u;
    {
        const bool branch_taken_0x19c668 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19c668) {
            ctx->pc = 0x19C6C4u;
            return;
        }
    }
    ctx->pc = 0x19C670u;
    // 0x19c670: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x19c670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x19c674: 0x8e030924  lw          $v1, 0x924($s0)
    ctx->pc = 0x19c674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2340)));
    // 0x19c678: 0x8c850028  lw          $a1, 0x28($a0)
    ctx->pc = 0x19c678u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x19c67c: 0xa3082a  slt         $at, $a1, $v1
    ctx->pc = 0x19c67cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x19c680: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
    ctx->pc = 0x19C680u;
    {
        const bool branch_taken_0x19c680 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c680) {
            ctx->pc = 0x19C720u;
            return;
        }
    }
    ctx->pc = 0x19C688u;
    // 0x19c688: 0x92030938  lbu         $v1, 0x938($s0)
    ctx->pc = 0x19c688u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2360)));
    // 0x19c68c: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x19C68Cu;
    {
        const bool branch_taken_0x19c68c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c68c) {
            ctx->pc = 0x19C720u;
            return;
        }
    }
    ctx->pc = 0x19C694u;
    // 0x19c694: 0xc057f04  jal         func_15FC10
    ctx->pc = 0x19C694u;
    SET_GPR_U32(ctx, 31, 0x19C69Cu);
    ctx->pc = 0x15FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15FC10u, 0x19C694u, 0x19C69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C69Cu;
label_19c69c:
    // 0x19c69c: 0x4400020  bltz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x19C69Cu;
    {
        const bool branch_taken_0x19c69c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x19c69c) {
            ctx->pc = 0x19C720u;
            return;
        }
    }
    ctx->pc = 0x19C6A4u;
    // 0x19c6a4: 0x8e020664  lw          $v0, 0x664($s0)
    ctx->pc = 0x19c6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1636)));
    // 0x19c6a8: 0x8e0508e8  lw          $a1, 0x8E8($s0)
    ctx->pc = 0x19c6a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2280)));
    // 0x19c6ac: 0x8c460028  lw          $a2, 0x28($v0)
    ctx->pc = 0x19c6acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x19c6b0: 0xc0422e0  jal         func_108B80
    ctx->pc = 0x19C6B0u;
    SET_GPR_U32(ctx, 31, 0x19C6B8u);
    ctx->pc = 0x19C6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C6B0u;
    // 0x19c6b4: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108B80u, 0x19C6B0u, 0x19C6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C6B8u;
label_19c6b8:
    // 0x19c6b8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x19c6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19c6bc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x19C6BCu;
    {
        const bool branch_taken_0x19c6bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C6BCu;
        // 0x19c6c0: 0xae0308ec  sw          $v1, 0x8EC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2284), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c6bc) {
            ctx->pc = 0x19C720u;
            return;
        }
    }
    ctx->pc = 0x19C6C4u;
}
