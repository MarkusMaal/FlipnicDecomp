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

// Function: entry_001fa83c
// Address: 0x1fa83c - 0x1fa870
void entry_001fa83c_0x1fa83c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fa83c_0x1fa83c");
#endif

    ctx->pc = 0x1fa83cu;

    // 0x1fa83c: 0x10f080  sll         $fp, $s0, 2
    ctx->pc = 0x1fa83cu;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1fa840: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1fa840u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa844: 0x2be1021  addu        $v0, $s5, $fp
    ctx->pc = 0x1fa844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 30)));
    // 0x1fa848: 0x1a000018  blez        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1FA848u;
    {
        const bool branch_taken_0x1fa848 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x1FA84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA848u;
        // 0x1fa84c: 0xc4540000  lwc1        $f20, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa848) {
            ctx->pc = 0x1FA8ACu;
            return;
        }
    }
    ctx->pc = 0x1FA850u;
    // 0x1fa850: 0x27c2fffc  addiu       $v0, $fp, -0x4
    ctx->pc = 0x1fa850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967292));
    // 0x1fa854: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x1fa854u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x1fa858: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1fa858u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1fa85c: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x1fa85cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x1fa860: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1fa860u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1fa864: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x1fa864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x1fa868: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x1fa868u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa86c: 0x0  nop
    ctx->pc = 0x1fa86cu;
    // NOP
    ctx->pc = 0x1fa870u;
}
