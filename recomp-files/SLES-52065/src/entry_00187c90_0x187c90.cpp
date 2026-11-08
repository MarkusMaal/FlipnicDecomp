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

// Function: entry_00187c90
// Address: 0x187c90 - 0x187d34
void entry_00187c90_0x187c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187c90_0x187c90");
#endif

    ctx->pc = 0x187c90u;

    // 0x187c90: 0x92450000  lbu         $a1, 0x0($s2)
    ctx->pc = 0x187c90u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x187c94: 0x24040073  addiu       $a0, $zero, 0x73
    ctx->pc = 0x187c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x187c98: 0x10a40029  beq         $a1, $a0, . + 4 + (0x29 << 2)
    ctx->pc = 0x187C98u;
    {
        const bool branch_taken_0x187c98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x187C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187C98u;
        // 0x187c9c: 0x2404006e  addiu       $a0, $zero, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187c98) {
            ctx->pc = 0x187D40u;
            return;
        }
    }
    ctx->pc = 0x187CA0u;
    // 0x187ca0: 0x10a40024  beq         $a1, $a0, . + 4 + (0x24 << 2)
    ctx->pc = 0x187CA0u;
    {
        const bool branch_taken_0x187ca0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x187ca0) {
            ctx->pc = 0x187D34u;
            return;
        }
    }
    ctx->pc = 0x187CA8u;
    // 0x187ca8: 0x24040070  addiu       $a0, $zero, 0x70
    ctx->pc = 0x187ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x187cac: 0x10a40021  beq         $a1, $a0, . + 4 + (0x21 << 2)
    ctx->pc = 0x187CACu;
    {
        const bool branch_taken_0x187cac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x187CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187CACu;
        // 0x187cb0: 0x24040063  addiu       $a0, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187cac) {
            ctx->pc = 0x187D34u;
            return;
        }
    }
    ctx->pc = 0x187CB4u;
    // 0x187cb4: 0x10a4001f  beq         $a1, $a0, . + 4 + (0x1F << 2)
    ctx->pc = 0x187CB4u;
    {
        const bool branch_taken_0x187cb4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x187cb4) {
            ctx->pc = 0x187D34u;
            return;
        }
    }
    ctx->pc = 0x187CBCu;
    // 0x187cbc: 0x24040047  addiu       $a0, $zero, 0x47
    ctx->pc = 0x187cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x187cc0: 0x10a4001c  beq         $a1, $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x187CC0u;
    {
        const bool branch_taken_0x187cc0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x187CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187CC0u;
        // 0x187cc4: 0x24040067  addiu       $a0, $zero, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187cc0) {
            ctx->pc = 0x187D34u;
            return;
        }
    }
    ctx->pc = 0x187CC8u;
    // 0x187cc8: 0x10a4001a  beq         $a1, $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x187CC8u;
    {
        const bool branch_taken_0x187cc8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x187cc8) {
            ctx->pc = 0x187D34u;
            return;
        }
    }
    ctx->pc = 0x187CD0u;
    // 0x187cd0: 0x24040045  addiu       $a0, $zero, 0x45
    ctx->pc = 0x187cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x187cd4: 0x10a40017  beq         $a1, $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x187CD4u;
    {
        const bool branch_taken_0x187cd4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x187CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187CD4u;
        // 0x187cd8: 0x24040065  addiu       $a0, $zero, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187cd4) {
            ctx->pc = 0x187D34u;
            return;
        }
    }
    ctx->pc = 0x187CDCu;
    // 0x187cdc: 0x10a40015  beq         $a1, $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x187CDCu;
    {
        const bool branch_taken_0x187cdc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x187cdc) {
            ctx->pc = 0x187D34u;
            return;
        }
    }
    ctx->pc = 0x187CE4u;
    // 0x187ce4: 0x24040066  addiu       $a0, $zero, 0x66
    ctx->pc = 0x187ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x187ce8: 0x10a40012  beq         $a1, $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x187CE8u;
    {
        const bool branch_taken_0x187ce8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x187CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187CE8u;
        // 0x187cec: 0x24040058  addiu       $a0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187ce8) {
            ctx->pc = 0x187D34u;
            return;
        }
    }
    ctx->pc = 0x187CF0u;
    // 0x187cf0: 0x10a40010  beq         $a1, $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x187CF0u;
    {
        const bool branch_taken_0x187cf0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x187cf0) {
            ctx->pc = 0x187D34u;
            return;
        }
    }
    ctx->pc = 0x187CF8u;
    // 0x187cf8: 0x24040078  addiu       $a0, $zero, 0x78
    ctx->pc = 0x187cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x187cfc: 0x10a4000d  beq         $a1, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x187CFCu;
    {
        const bool branch_taken_0x187cfc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x187D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187CFCu;
        // 0x187d00: 0x24040075  addiu       $a0, $zero, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187cfc) {
            ctx->pc = 0x187D34u;
            return;
        }
    }
    ctx->pc = 0x187D04u;
    // 0x187d04: 0x10a4000b  beq         $a1, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x187D04u;
    {
        const bool branch_taken_0x187d04 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x187d04) {
            ctx->pc = 0x187D34u;
            return;
        }
    }
    ctx->pc = 0x187D0Cu;
    // 0x187d0c: 0x2404006f  addiu       $a0, $zero, 0x6F
    ctx->pc = 0x187d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
    // 0x187d10: 0x10a40008  beq         $a1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x187D10u;
    {
        const bool branch_taken_0x187d10 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x187D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187D10u;
        // 0x187d14: 0x24040069  addiu       $a0, $zero, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187d10) {
            ctx->pc = 0x187D34u;
            return;
        }
    }
    ctx->pc = 0x187D18u;
    // 0x187d18: 0x10a40006  beq         $a1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x187D18u;
    {
        const bool branch_taken_0x187d18 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x187d18) {
            ctx->pc = 0x187D34u;
            return;
        }
    }
    ctx->pc = 0x187D20u;
    // 0x187d20: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x187d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x187d24: 0x10a40003  beq         $a1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x187D24u;
    {
        const bool branch_taken_0x187d24 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x187d24) {
            ctx->pc = 0x187D34u;
            return;
        }
    }
    ctx->pc = 0x187D2Cu;
    // 0x187d2c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x187D2Cu;
    {
        const bool branch_taken_0x187d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187d2c) {
            ctx->pc = 0x187D4Cu;
            return;
        }
    }
    ctx->pc = 0x187D34u;
}
