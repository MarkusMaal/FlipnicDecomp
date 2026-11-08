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

// Function: entry_001964e8
// Address: 0x1964e8 - 0x19656c
void entry_001964e8_0x1964e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001964e8_0x1964e8");
#endif

    switch (ctx->pc) {
        case 0x19651cu: goto label_19651c;
        case 0x196564u: goto label_196564;
        default: break;
    }

    ctx->pc = 0x1964e8u;

    // 0x1964e8: 0x8e630320  lw          $v1, 0x320($s3)
    ctx->pc = 0x1964e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 800)));
    // 0x1964ec: 0x10600049  beqz        $v1, . + 4 + (0x49 << 2)
    ctx->pc = 0x1964ECu;
    {
        const bool branch_taken_0x1964ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1964ec) {
            ctx->pc = 0x196614u;
            return;
        }
    }
    ctx->pc = 0x1964F4u;
    // 0x1964f4: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x1964f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1964f8: 0x8cc3002c  lw          $v1, 0x2C($a2)
    ctx->pc = 0x1964f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
    // 0x1964fc: 0x8c850028  lw          $a1, 0x28($a0)
    ctx->pc = 0x1964fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x196500: 0xa3082a  slt         $at, $a1, $v1
    ctx->pc = 0x196500u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x196504: 0x10200043  beqz        $at, . + 4 + (0x43 << 2)
    ctx->pc = 0x196504u;
    {
        const bool branch_taken_0x196504 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x196504) {
            ctx->pc = 0x196614u;
            return;
        }
    }
    ctx->pc = 0x19650Cu;
    // 0x19650c: 0x8cc50068  lw          $a1, 0x68($a2)
    ctx->pc = 0x19650cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 104)));
    // 0x196510: 0x24d00040  addiu       $s0, $a2, 0x40
    ctx->pc = 0x196510u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x196514: 0xc057040  jal         func_15C100
    ctx->pc = 0x196514u;
    SET_GPR_U32(ctx, 31, 0x19651Cu);
    ctx->pc = 0x196518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196514u;
    // 0x196518: 0x8cc60064  lw          $a2, 0x64($a2) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x196514u, 0x19651Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19651Cu;
label_19651c:
    // 0x19651c: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x19651cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x196520: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x196520u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x196524: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x196524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x196528: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x196528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
    // 0x19652c: 0x8c6301fc  lw          $v1, 0x1FC($v1)
    ctx->pc = 0x19652cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 508)));
    // 0x196530: 0x10600038  beqz        $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x196530u;
    {
        const bool branch_taken_0x196530 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x196530) {
            ctx->pc = 0x196614u;
            return;
        }
    }
    ctx->pc = 0x196538u;
    // 0x196538: 0x8e630328  lw          $v1, 0x328($s3)
    ctx->pc = 0x196538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 808)));
    // 0x19653c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19653cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x196540: 0xae630328  sw          $v1, 0x328($s3)
    ctx->pc = 0x196540u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 808), GPR_U32(ctx, 3));
    // 0x196544: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x196544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x196548: 0x8e640328  lw          $a0, 0x328($s3)
    ctx->pc = 0x196548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 808)));
    // 0x19654c: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x19654cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x196550: 0x14600030  bnez        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x196550u;
    {
        const bool branch_taken_0x196550 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x196550) {
            ctx->pc = 0x196614u;
            return;
        }
    }
    ctx->pc = 0x196558u;
    // 0x196558: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x196558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19655c: 0xc063e08  jal         func_18F820
    ctx->pc = 0x19655Cu;
    SET_GPR_U32(ctx, 31, 0x196564u);
    ctx->pc = 0x196560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19655Cu;
    // 0x196560: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x19655Cu, 0x196564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196564u;
label_196564:
    // 0x196564: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x196564u;
    {
        const bool branch_taken_0x196564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196564u;
        // 0x196568: 0xae600328  sw          $zero, 0x328($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 808), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196564) {
            ctx->pc = 0x196614u;
            return;
        }
    }
    ctx->pc = 0x19656Cu;
}
