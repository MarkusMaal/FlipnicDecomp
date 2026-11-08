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

// Function: entry_0021a6a8
// Address: 0x21a6a8 - 0x21a6f0
void entry_0021a6a8_0x21a6a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021a6a8_0x21a6a8");
#endif

    ctx->pc = 0x21a6a8u;

    // 0x21a6a8: 0x16000011  bnez        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x21A6A8u;
    {
        const bool branch_taken_0x21a6a8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A6A8u;
        // 0x21a6ac: 0x24a2ffff  addiu       $v0, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a6a8) {
            ctx->pc = 0x21A6F0u;
            return;
        }
    }
    ctx->pc = 0x21A6B0u;
    // 0x21a6b0: 0x3c03e001  lui         $v1, 0xE001
    ctx->pc = 0x21a6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57345 << 16));
    // 0x21a6b4: 0x21340  sll         $v0, $v0, 13
    ctx->pc = 0x21a6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
    // 0x21a6b8: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x21a6b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21a6bc: 0x40023000  mfc0        $v0, Wired
    ctx->pc = 0x21a6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_wired);
    // 0x21a6c0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x21a6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x21a6c4: 0x40823000  mtc0        $v0, Wired
    ctx->pc = 0x21a6c4u;
    ctx->cop0_wired = GPR_U32(ctx, 2) & 0x3F; ctx->cop0_random = 47;
    // 0x21a6c8: 0x40850000  mtc0        $a1, Index
    ctx->pc = 0x21a6c8u;
    ctx->cop0_index = GPR_U32(ctx, 5) & 0x3F;
    // 0x21a6cc: 0x40802800  mtc0        $zero, PageMask
    ctx->pc = 0x21a6ccu;
    ctx->cop0_pagemask = GPR_U32(ctx, 0) & 0x01FFE000;
    // 0x21a6d0: 0x40865000  mtc0        $a2, EntryHi
    ctx->pc = 0x21a6d0u;
    ctx->cop0_entryhi = GPR_U32(ctx, 6) & 0xC00000FF;
    // 0x21a6d4: 0x40801000  mtc0        $zero, EntryLo0
    ctx->pc = 0x21a6d4u;
    ctx->cop0_entrylo0 = GPR_U32(ctx, 0) & 0x3FFFFFFF;
    // 0x21a6d8: 0x40801800  mtc0        $zero, EntryLo1
    ctx->pc = 0x21a6d8u;
    ctx->cop0_entrylo1 = GPR_U32(ctx, 0) & 0x3FFFFFFF;
    // 0x21a6dc: 0x40f  sync.p
    ctx->pc = 0x21a6dcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x21a6e0: 0x42000002  tlbwi
    ctx->pc = 0x21a6e0u;
    runtime->handleTLBWI(rdram, ctx);
    // 0x21a6e4: 0x40f  sync.p
    ctx->pc = 0x21a6e4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x21a6e8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x21A6E8u;
    {
        const bool branch_taken_0x21a6e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A6E8u;
        // 0x21a6ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a6e8) {
            ctx->pc = 0x21A750u;
            return;
        }
    }
    ctx->pc = 0x21A6F0u;
}
