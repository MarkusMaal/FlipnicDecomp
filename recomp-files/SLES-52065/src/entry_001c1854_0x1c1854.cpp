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

// Function: entry_001c1854
// Address: 0x1c1854 - 0x1c18b4
void entry_001c1854_0x1c1854(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1854_0x1c1854");
#endif

    switch (ctx->pc) {
        case 0x1c1874u: goto label_1c1874;
        default: break;
    }

    ctx->pc = 0x1c1854u;

    // 0x1c1854: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x1c1854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x1c1858: 0x1062002b  beq         $v1, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x1C1858u;
    {
        const bool branch_taken_0x1c1858 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C185Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1858u;
        // 0x1c185c: 0x3c020021  lui         $v0, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1858) {
            ctx->pc = 0x1C1908u;
            return;
        }
    }
    ctx->pc = 0x1C1860u;
    // 0x1c1860: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x1c1860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1c1864: 0x24425060  addiu       $v0, $v0, 0x5060
    ctx->pc = 0x1c1864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20576));
    // 0x1c1868: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1c1868u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c186c: 0xc07308c  jal         func_1CC230
    ctx->pc = 0x1C186Cu;
    SET_GPR_U32(ctx, 31, 0x1C1874u);
    ctx->pc = 0x1C1870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C186Cu;
    // 0x1c1870: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC230u, 0x1C186Cu, 0x1C1874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1874u;
label_1c1874:
    // 0x1c1874: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1c1874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c1878: 0x14430011  bne         $v0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C1878u;
    {
        const bool branch_taken_0x1c1878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c1878) {
            ctx->pc = 0x1C18C0u;
            return;
        }
    }
    ctx->pc = 0x1C1880u;
    // 0x1c1880: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x1c1880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1c1884: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c1884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c1888: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1C1888u;
    {
        const bool branch_taken_0x1c1888 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c1888) {
            ctx->pc = 0x1C18C0u;
            return;
        }
    }
    ctx->pc = 0x1C1890u;
    // 0x1c1890: 0x8e040064  lw          $a0, 0x64($s0)
    ctx->pc = 0x1c1890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x1c1894: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1c1894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c1898: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C1898u;
    {
        const bool branch_taken_0x1c1898 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C189Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1898u;
        // 0x1c189c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1898) {
            ctx->pc = 0x1C18BCu;
            return;
        }
    }
    ctx->pc = 0x1C18A0u;
    // 0x1c18a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c18a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c18a4: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C18A4u;
    {
        const bool branch_taken_0x1c18a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c18a4) {
            ctx->pc = 0x1C18B4u;
            return;
        }
    }
    ctx->pc = 0x1C18ACu;
    // 0x1c18ac: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1C18ACu;
    {
        const bool branch_taken_0x1c18ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C18B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C18ACu;
        // 0x1c18b0: 0x8e020060  lw          $v0, 0x60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c18ac) {
            ctx->pc = 0x1C18C4u;
            return;
        }
    }
    ctx->pc = 0x1C18B4u;
}
