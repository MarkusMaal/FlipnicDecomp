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

// Function: entry_00138774
// Address: 0x138774 - 0x1387e0
void entry_00138774_0x138774(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138774_0x138774");
#endif

    switch (ctx->pc) {
        case 0x13877cu: goto label_13877c;
        default: break;
    }

    ctx->pc = 0x138774u;

    // 0x138774: 0xc080748  jal         func_201D20
    ctx->pc = 0x138774u;
    SET_GPR_U32(ctx, 31, 0x13877Cu);
    ctx->pc = 0x138778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138774u;
    // 0x138778: 0x24840080  addiu       $a0, $a0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201D20u, 0x138774u, 0x13877Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13877Cu;
label_13877c:
    // 0x13877c: 0xafa200dc  sw          $v0, 0xDC($sp)
    ctx->pc = 0x13877cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
    // 0x138780: 0x8e830090  lw          $v1, 0x90($s4)
    ctx->pc = 0x138780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x138784: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x138784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x138788: 0x8c630050  lw          $v1, 0x50($v1)
    ctx->pc = 0x138788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x13878c: 0x14620023  bne         $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x13878Cu;
    {
        const bool branch_taken_0x13878c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x13878c) {
            ctx->pc = 0x13881Cu;
            return;
        }
    }
    ctx->pc = 0x138794u;
    // 0x138794: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x138794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x138798: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x138798u;
    {
        const bool branch_taken_0x138798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13879Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138798u;
        // 0x13879c: 0x3c025027  lui         $v0, 0x5027 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20519 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138798) {
            ctx->pc = 0x1387E0u;
            return;
        }
    }
    ctx->pc = 0x1387A0u;
    // 0x1387a0: 0x3c02502f  lui         $v0, 0x502F
    ctx->pc = 0x1387a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20527 << 16));
    // 0x1387a4: 0x34038022  ori         $v1, $zero, 0x8022
    ctx->pc = 0x1387a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32802);
    // 0x1387a8: 0x34444000  ori         $a0, $v0, 0x4000
    ctx->pc = 0x1387a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1387ac: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x1387acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x1387b0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1387b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1387b4: 0x34452521  ori         $a1, $v0, 0x2521
    ctx->pc = 0x1387b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9505);
    // 0x1387b8: 0x641025  or          $v0, $v1, $a0
    ctx->pc = 0x1387b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1387bc: 0xfe820000  sd          $v0, 0x0($s4)
    ctx->pc = 0x1387bcu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
    // 0x1387c0: 0x33c3ffff  andi        $v1, $fp, 0xFFFF
    ctx->pc = 0x1387c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)65535);
    // 0x1387c4: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1387c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1387c8: 0xfe850008  sd          $a1, 0x8($s4)
    ctx->pc = 0x1387c8u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 5));
    // 0x1387cc: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1387ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1387d0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1387d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1387d4: 0xfe820010  sd          $v0, 0x10($s4)
    ctx->pc = 0x1387d4u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 16), GPR_U64(ctx, 2));
    // 0x1387d8: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x1387D8u;
    {
        const bool branch_taken_0x1387d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1387DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1387D8u;
        // 0x1387dc: 0xfe850018  sd          $a1, 0x18($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 24), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1387d8) {
            ctx->pc = 0x138924u;
            return;
        }
    }
    ctx->pc = 0x1387E0u;
}
