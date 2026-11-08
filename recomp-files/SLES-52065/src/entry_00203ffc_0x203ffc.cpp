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

// Function: entry_00203ffc
// Address: 0x203ffc - 0x204024
void entry_00203ffc_0x203ffc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00203ffc_0x203ffc");
#endif

    ctx->pc = 0x203ffcu;

    // 0x203ffc: 0x24020066  addiu       $v0, $zero, 0x66
    ctx->pc = 0x203ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x204000: 0x16e2000b  bne         $s7, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x204000u;
    {
        const bool branch_taken_0x204000 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x204004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204000u;
        // 0x204004: 0x8fa301e0  lw          $v1, 0x1E0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204000) {
            ctx->pc = 0x204030u;
            return;
        }
    }
    ctx->pc = 0x204008u;
    // 0x204008: 0x18a00012  blez        $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x204008u;
    {
        const bool branch_taken_0x204008 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x20400Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204008u;
        // 0x20400c: 0x26550002  addiu       $s5, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204008) {
            ctx->pc = 0x204054u;
            return;
        }
    }
    ctx->pc = 0x204010u;
    // 0x204010: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x204010u;
    {
        const bool branch_taken_0x204010 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x204014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204010u;
        // 0x204014: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204010) {
            ctx->pc = 0x204024u;
            return;
        }
    }
    ctx->pc = 0x204018u;
    // 0x204018: 0x33c20001  andi        $v0, $fp, 0x1
    ctx->pc = 0x204018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
    // 0x20401c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x20401Cu;
    {
        const bool branch_taken_0x20401c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x204020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20401Cu;
        // 0x204020: 0x83a201d0  lb          $v0, 0x1D0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20401c) {
            ctx->pc = 0x204058u;
            return;
        }
    }
    ctx->pc = 0x204024u;
}
