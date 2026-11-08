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

// Function: entry_00107b4c
// Address: 0x107b4c - 0x107b7c
void entry_00107b4c_0x107b4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107b4c_0x107b4c");
#endif

    ctx->pc = 0x107b4cu;

    // 0x107b4c: 0x0  nop
    ctx->pc = 0x107b4cu;
    // NOP
    // 0x107b50: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x107b50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x107b54: 0x2a030017  slti        $v1, $s0, 0x17
    ctx->pc = 0x107b54u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)23) ? 1 : 0);
    // 0x107b58: 0x1460ffd5  bnez        $v1, . + 4 + (-0x2B << 2)
    ctx->pc = 0x107B58u;
    {
        const bool branch_taken_0x107b58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x107B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107B58u;
        // 0x107b5c: 0x102040  sll         $a0, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107b58) {
            ctx->pc = 0x107AB0u;
            return;
        }
    }
    ctx->pc = 0x107B60u;
    // 0x107b60: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x107b60u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107b64: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x107b64u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107b68: 0x3c060021  lui         $a2, 0x21
    ctx->pc = 0x107b68u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)33 << 16));
    // 0x107b6c: 0x3c070021  lui         $a3, 0x21
    ctx->pc = 0x107b6cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)33 << 16));
    // 0x107b70: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x107b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x107b74: 0x24c60210  addiu       $a2, $a2, 0x210
    ctx->pc = 0x107b74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 528));
    // 0x107b78: 0x24e7fd90  addiu       $a3, $a3, -0x270
    ctx->pc = 0x107b78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294966672));
    ctx->pc = 0x107b7cu;
}
