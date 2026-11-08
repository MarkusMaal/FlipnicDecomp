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

// Function: entry_001c6d54
// Address: 0x1c6d54 - 0x1c6dc4
void entry_001c6d54_0x1c6d54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c6d54_0x1c6d54");
#endif

    ctx->pc = 0x1c6d54u;

    // 0x1c6d54: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x1c6d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1c6d58: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x1c6d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1c6d5c: 0x10620024  beq         $v1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1C6D5Cu;
    {
        const bool branch_taken_0x1c6d5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C6D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6D5Cu;
        // 0x1c6d60: 0x24020021  addiu       $v0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6d5c) {
            ctx->pc = 0x1C6DF0u;
            return;
        }
    }
    ctx->pc = 0x1C6D64u;
    // 0x1c6d64: 0x2402001a  addiu       $v0, $zero, 0x1A
    ctx->pc = 0x1c6d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1c6d68: 0x1062001f  beq         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1C6D68u;
    {
        const bool branch_taken_0x1c6d68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C6D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6D68u;
        // 0x1c6d6c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6d68) {
            ctx->pc = 0x1C6DE8u;
            return;
        }
    }
    ctx->pc = 0x1C6D70u;
    // 0x1c6d70: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x1c6d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1c6d74: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1C6D74u;
    {
        const bool branch_taken_0x1c6d74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C6D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6D74u;
        // 0x1c6d78: 0x2402001b  addiu       $v0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6d74) {
            ctx->pc = 0x1C6DE4u;
            return;
        }
    }
    ctx->pc = 0x1C6D7Cu;
    // 0x1c6d7c: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1C6D7Cu;
    {
        const bool branch_taken_0x1c6d7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c6d7c) {
            ctx->pc = 0x1C6DE4u;
            return;
        }
    }
    ctx->pc = 0x1C6D84u;
    // 0x1c6d84: 0x24020029  addiu       $v0, $zero, 0x29
    ctx->pc = 0x1c6d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x1c6d88: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1C6D88u;
    {
        const bool branch_taken_0x1c6d88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C6D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6D88u;
        // 0x1c6d8c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6d88) {
            ctx->pc = 0x1C6DE4u;
            return;
        }
    }
    ctx->pc = 0x1C6D90u;
    // 0x1c6d90: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C6D90u;
    {
        const bool branch_taken_0x1c6d90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c6d90) {
            ctx->pc = 0x1C6DD8u;
            return;
        }
    }
    ctx->pc = 0x1C6D98u;
    // 0x1c6d98: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1c6d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c6d9c: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C6D9Cu;
    {
        const bool branch_taken_0x1c6d9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C6DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6D9Cu;
        // 0x1c6da0: 0x2402002a  addiu       $v0, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6d9c) {
            ctx->pc = 0x1C6DD0u;
            return;
        }
    }
    ctx->pc = 0x1C6DA4u;
    // 0x1c6da4: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x1c6da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1c6da8: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C6DA8u;
    {
        const bool branch_taken_0x1c6da8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C6DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6DA8u;
        // 0x1c6dac: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6da8) {
            ctx->pc = 0x1C6DC8u;
            return;
        }
    }
    ctx->pc = 0x1C6DB0u;
    // 0x1c6db0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c6db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c6db4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C6DB4u;
    {
        const bool branch_taken_0x1c6db4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c6db4) {
            ctx->pc = 0x1C6DC4u;
            return;
        }
    }
    ctx->pc = 0x1C6DBCu;
    // 0x1c6dbc: 0x10000271  b           . + 4 + (0x271 << 2)
    ctx->pc = 0x1C6DBCu;
    {
        const bool branch_taken_0x1c6dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6dbc) {
            ctx->pc = 0x1C7784u;
            return;
        }
    }
    ctx->pc = 0x1C6DC4u;
}
