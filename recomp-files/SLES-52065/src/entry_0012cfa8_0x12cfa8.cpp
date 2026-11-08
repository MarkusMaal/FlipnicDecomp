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

// Function: entry_0012cfa8
// Address: 0x12cfa8 - 0x12cfe0
void entry_0012cfa8_0x12cfa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012cfa8_0x12cfa8");
#endif

    ctx->pc = 0x12cfa8u;

    // 0x12cfa8: 0x3c03002b  lui         $v1, 0x2B
    ctx->pc = 0x12cfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
    // 0x12cfac: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x12cfacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x12cfb0: 0x24632f60  addiu       $v1, $v1, 0x2F60
    ctx->pc = 0x12cfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12128));
    // 0x12cfb4: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x12cfb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x12cfb8: 0x90650000  lbu         $a1, 0x0($v1)
    ctx->pc = 0x12cfb8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12cfbc: 0x10a20016  beq         $a1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x12CFBCu;
    {
        const bool branch_taken_0x12cfbc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x12CFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CFBCu;
        // 0x12cfc0: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cfbc) {
            ctx->pc = 0x12D018u;
            return;
        }
    }
    ctx->pc = 0x12CFC4u;
    // 0x12cfc4: 0x10a2000d  beq         $a1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x12CFC4u;
    {
        const bool branch_taken_0x12cfc4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x12cfc4) {
            ctx->pc = 0x12CFFCu;
            return;
        }
    }
    ctx->pc = 0x12CFCCu;
    // 0x12cfcc: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x12cfccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x12cfd0: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12CFD0u;
    {
        const bool branch_taken_0x12cfd0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x12cfd0) {
            ctx->pc = 0x12CFE0u;
            return;
        }
    }
    ctx->pc = 0x12CFD8u;
    // 0x12cfd8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x12CFD8u;
    {
        const bool branch_taken_0x12cfd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12cfd8) {
            ctx->pc = 0x12D028u;
            return;
        }
    }
    ctx->pc = 0x12CFE0u;
}
