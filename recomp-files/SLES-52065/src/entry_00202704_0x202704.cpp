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

// Function: entry_00202704
// Address: 0x202704 - 0x202740
void entry_00202704_0x202704(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00202704_0x202704");
#endif

    ctx->pc = 0x202704u;

    // 0x202704: 0x2a820010  slti        $v0, $s4, 0x10
    ctx->pc = 0x202704u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x202708: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x202708u;
    {
        const bool branch_taken_0x202708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20270Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202708u;
        // 0x20270c: 0xafa00038  sw          $zero, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202708) {
            ctx->pc = 0x2027DCu;
            return;
        }
    }
    ctx->pc = 0x202710u;
    // 0x202710: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x202710u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x202714: 0x50400276  beql        $v0, $zero, . + 4 + (0x276 << 2)
    ctx->pc = 0x202714u;
    {
        const bool branch_taken_0x202714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x202714) {
            ctx->pc = 0x202718u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x202714u;
            // 0x202718: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2030F0u;
            return;
        }
    }
    ctx->pc = 0x20271Cu;
    // 0x20271c: 0x18400022  blez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x20271Cu;
    {
        const bool branch_taken_0x20271c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x202720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20271Cu;
        // 0x202720: 0x28420017  slti        $v0, $v0, 0x17 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)23) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20271c) {
            ctx->pc = 0x2027A8u;
            return;
        }
    }
    ctx->pc = 0x202724u;
    // 0x202724: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x202724u;
    {
        const bool branch_taken_0x202724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x202728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202724u;
        // 0x202728: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202724) {
            ctx->pc = 0x202740u;
            return;
        }
    }
    ctx->pc = 0x20272Cu;
    // 0x20272c: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x20272cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x202730: 0x24424f98  addiu       $v0, $v0, 0x4F98
    ctx->pc = 0x202730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20376));
    // 0x202734: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x202734u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202738: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x202738u;
    {
        const bool branch_taken_0x202738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20273Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202738u;
        // 0x20273c: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202738) {
            ctx->pc = 0x202798u;
            return;
        }
    }
    ctx->pc = 0x202740u;
}
