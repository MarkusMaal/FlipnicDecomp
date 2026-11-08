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

// Function: entry_001c2488
// Address: 0x1c2488 - 0x1c24c8
void entry_001c2488_0x1c2488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c2488_0x1c2488");
#endif

    ctx->pc = 0x1c2488u;

    // 0x1c2488: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c2488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c248c: 0x1062004c  beq         $v1, $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x1C248Cu;
    {
        const bool branch_taken_0x1c248c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C2490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C248Cu;
        // 0x1c2490: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c248c) {
            ctx->pc = 0x1C25C0u;
            return;
        }
    }
    ctx->pc = 0x1C2494u;
    // 0x1c2494: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c2494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c2498: 0x1062004a  beq         $v1, $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x1C2498u;
    {
        const bool branch_taken_0x1c2498 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C249Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2498u;
        // 0x1c249c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2498) {
            ctx->pc = 0x1C25C4u;
            return;
        }
    }
    ctx->pc = 0x1C24A0u;
    // 0x1c24a0: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x1c24a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x1c24a4: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C24A4u;
    {
        const bool branch_taken_0x1c24a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C24A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C24A4u;
        // 0x1c24a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c24a4) {
            ctx->pc = 0x1C24CCu;
            return;
        }
    }
    ctx->pc = 0x1C24ACu;
    // 0x1c24ac: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1c24acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1c24b0: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C24B0u;
    {
        const bool branch_taken_0x1c24b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C24B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C24B0u;
        // 0x1c24b4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c24b0) {
            ctx->pc = 0x1C24C8u;
            return;
        }
    }
    ctx->pc = 0x1C24B8u;
    // 0x1c24b8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C24B8u;
    {
        const bool branch_taken_0x1c24b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c24b8) {
            ctx->pc = 0x1C24C8u;
            return;
        }
    }
    ctx->pc = 0x1C24C0u;
    // 0x1c24c0: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x1C24C0u;
    {
        const bool branch_taken_0x1c24c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C24C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C24C0u;
        // 0x1c24c4: 0x26240064  addiu       $a0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c24c0) {
            ctx->pc = 0x1C260Cu;
            return;
        }
    }
    ctx->pc = 0x1C24C8u;
}
