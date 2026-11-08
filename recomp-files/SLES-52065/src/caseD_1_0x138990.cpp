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

// Function: caseD_1
// Address: 0x138990 - 0x138a00
void caseD_1_0x138990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x138990");
#endif

    switch (ctx->pc) {
        case 0x1389d0u: goto label_1389d0;
        case 0x1389e8u: goto label_1389e8;
        default: break;
    }

    ctx->pc = 0x138990u;

    // 0x138990: 0x8f8384cc  lw          $v1, -0x7B34($gp)
    ctx->pc = 0x138990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935756)));
    // 0x138994: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x138994u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x138998: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x138998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x13899c: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x13899cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1389a0: 0xac430020  sw          $v1, 0x20($v0)
    ctx->pc = 0x1389a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
    // 0x1389a4: 0x8e820090  lw          $v0, 0x90($s4)
    ctx->pc = 0x1389a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x1389a8: 0x8c420068  lw          $v0, 0x68($v0)
    ctx->pc = 0x1389a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x1389ac: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1389acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x1389b0: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x1389B0u;
    {
        const bool branch_taken_0x1389b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1389b0) {
            ctx->pc = 0x138A74u;
            return;
        }
    }
    ctx->pc = 0x1389B8u;
    // 0x1389b8: 0x8f8284d0  lw          $v0, -0x7B30($gp)
    ctx->pc = 0x1389b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935760)));
    // 0x1389bc: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1389bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1389c0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1389c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1389c4: 0x8e840090  lw          $a0, 0x90($s4)
    ctx->pc = 0x1389c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x1389c8: 0xc080874  jal         func_2021D0
    ctx->pc = 0x1389C8u;
    SET_GPR_U32(ctx, 31, 0x1389D0u);
    ctx->pc = 0x1389CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1389C8u;
    // 0x1389cc: 0x24a5ef40  addiu       $a1, $a1, -0x10C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2021D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2021D0u, 0x1389C8u, 0x1389D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1389D0u;
label_1389d0:
    // 0x1389d0: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1389D0u;
    {
        const bool branch_taken_0x1389d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1389D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1389D0u;
        // 0x1389d4: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1389d0) {
            ctx->pc = 0x138A74u;
            return;
        }
    }
    ctx->pc = 0x1389D8u;
    // 0x1389d8: 0x24440003  addiu       $a0, $v0, 0x3
    ctx->pc = 0x1389d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x1389dc: 0x24a5ef48  addiu       $a1, $a1, -0x10B8
    ctx->pc = 0x1389dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963016));
    // 0x1389e0: 0xc0805e6  jal         func_201798
    ctx->pc = 0x1389E0u;
    SET_GPR_U32(ctx, 31, 0x1389E8u);
    ctx->pc = 0x1389E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1389E0u;
    // 0x1389e4: 0x27a601d4  addiu       $a2, $sp, 0x1D4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 468));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201798u, 0x1389E0u, 0x1389E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1389E8u;
label_1389e8:
    // 0x1389e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1389e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1389ec: 0x14430021  bne         $v0, $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x1389ECu;
    {
        const bool branch_taken_0x1389ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1389ec) {
            ctx->pc = 0x138A74u;
            return;
        }
    }
    ctx->pc = 0x1389F4u;
    // 0x1389f4: 0x8fa201d4  lw          $v0, 0x1D4($sp)
    ctx->pc = 0x1389f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
    // 0x1389f8: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1389F8u;
    {
        const bool branch_taken_0x1389f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1389FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1389F8u;
        // 0x1389fc: 0xaf8285c4  sw          $v0, -0x7A3C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936004), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1389f8) {
            ctx->pc = 0x138A74u;
            return;
        }
    }
    ctx->pc = 0x138A00u;
}
