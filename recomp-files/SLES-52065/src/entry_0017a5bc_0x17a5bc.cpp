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

// Function: entry_0017a5bc
// Address: 0x17a5bc - 0x17a600
void entry_0017a5bc_0x17a5bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017a5bc_0x17a5bc");
#endif

    ctx->pc = 0x17a5bcu;

    // 0x17a5bc: 0x0  nop
    ctx->pc = 0x17a5bcu;
    // NOP
    // 0x17a5c0: 0x28a60004  slti        $a2, $a1, 0x4
    ctx->pc = 0x17a5c0u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x17a5c4: 0x14c0ffc0  bnez        $a2, . + 4 + (-0x40 << 2)
    ctx->pc = 0x17A5C4u;
    {
        const bool branch_taken_0x17a5c4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x17A5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A5C4u;
        // 0x17a5c8: 0x53080  sll         $a2, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a5c4) {
            ctx->pc = 0x17A4C8u;
            return;
        }
    }
    ctx->pc = 0x17A5CCu;
    // 0x17a5cc: 0x8f838620  lw          $v1, -0x79E0($gp)
    ctx->pc = 0x17a5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936096)));
    // 0x17a5d0: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x17a5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x17a5d4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x17a5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x17a5d8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17a5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17a5dc: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x17a5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
    // 0x17a5e0: 0x8c6301fc  lw          $v1, 0x1FC($v1)
    ctx->pc = 0x17a5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 508)));
    // 0x17a5e4: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x17A5E4u;
    {
        const bool branch_taken_0x17a5e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a5e4) {
            ctx->pc = 0x17A640u;
            return;
        }
    }
    ctx->pc = 0x17A5ECu;
    // 0x17a5ec: 0x8c832cd0  lw          $v1, 0x2CD0($a0)
    ctx->pc = 0x17a5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11472)));
    // 0x17a5f0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17A5F0u;
    {
        const bool branch_taken_0x17a5f0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x17A5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A5F0u;
        // 0x17a5f4: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a5f0) {
            ctx->pc = 0x17A600u;
            return;
        }
    }
    ctx->pc = 0x17A5F8u;
    // 0x17a5f8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x17A5F8u;
    {
        const bool branch_taken_0x17a5f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A5F8u;
        // 0x17a5fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a5f8) {
            ctx->pc = 0x17A618u;
            return;
        }
    }
    ctx->pc = 0x17A600u;
}
