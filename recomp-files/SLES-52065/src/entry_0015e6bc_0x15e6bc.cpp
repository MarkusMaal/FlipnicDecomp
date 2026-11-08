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

// Function: entry_0015e6bc
// Address: 0x15e6bc - 0x15e6e0
void entry_0015e6bc_0x15e6bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015e6bc_0x15e6bc");
#endif

    ctx->pc = 0x15e6bcu;

    // 0x15e6bc: 0x0  nop
    ctx->pc = 0x15e6bcu;
    // NOP
    // 0x15e6c0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x15e6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x15e6c4: 0x28830005  slti        $v1, $a0, 0x5
    ctx->pc = 0x15e6c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x15e6c8: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x15E6C8u;
    {
        const bool branch_taken_0x15e6c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15E6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E6C8u;
        // 0x15e6cc: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e6c8) {
            ctx->pc = 0x15E6A0u;
            return;
        }
    }
    ctx->pc = 0x15E6D0u;
    // 0x15e6d0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x15e6d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e6d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15e6d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e6d8: 0x3c03c47a  lui         $v1, 0xC47A
    ctx->pc = 0x15e6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50298 << 16));
    // 0x15e6dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15e6dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    ctx->pc = 0x15e6e0u;
}
