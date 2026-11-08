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

// Function: entry_0015cba4
// Address: 0x15cba4 - 0x15cbf4
void entry_0015cba4_0x15cba4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015cba4_0x15cba4");
#endif

    switch (ctx->pc) {
        case 0x15cbe8u: goto label_15cbe8;
        default: break;
    }

    ctx->pc = 0x15cba4u;

    // 0x15cba4: 0x0  nop
    ctx->pc = 0x15cba4u;
    // NOP
    // 0x15cba8: 0x8ea32c1c  lw          $v1, 0x2C1C($s5)
    ctx->pc = 0x15cba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 11292)));
    // 0x15cbac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15cbacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15cbb0: 0x761821  addu        $v1, $v1, $s6
    ctx->pc = 0x15cbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x15cbb4: 0x84640004  lh          $a0, 0x4($v1)
    ctx->pc = 0x15cbb4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x15cbb8: 0x84630006  lh          $v1, 0x6($v1)
    ctx->pc = 0x15cbb8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x15cbbc: 0x831826  xor         $v1, $a0, $v1
    ctx->pc = 0x15cbbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x15cbc0: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x15cbc0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x15cbc4: 0x3280a  movz        $a1, $zero, $v1
    ctx->pc = 0x15cbc4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
    // 0x15cbc8: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x15CBC8u;
    {
        const bool branch_taken_0x15cbc8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x15cbc8) {
            ctx->pc = 0x15CBF4u;
            return;
        }
    }
    ctx->pc = 0x15CBD0u;
    // 0x15cbd0: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x15cbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x15cbd4: 0x26a42c00  addiu       $a0, $s5, 0x2C00
    ctx->pc = 0x15cbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 11264));
    // 0x15cbd8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x15cbd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15cbdc: 0x26e50040  addiu       $a1, $s7, 0x40
    ctx->pc = 0x15cbdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 64));
    // 0x15cbe0: 0xc058154  jal         func_160550
    ctx->pc = 0x15CBE0u;
    SET_GPR_U32(ctx, 31, 0x15CBE8u);
    ctx->pc = 0x15CBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CBE0u;
    // 0x15cbe4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160550u, 0x15CBE0u, 0x15CBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CBE8u;
label_15cbe8:
    // 0x15cbe8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x15CBE8u;
    {
        const bool branch_taken_0x15cbe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CBE8u;
        // 0x15cbec: 0x27d1821  addu        $v1, $s3, $sp (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cbe8) {
            ctx->pc = 0x15CBF4u;
            return;
        }
    }
    ctx->pc = 0x15CBF0u;
    // 0x15cbf0: 0xac6000b0  sw          $zero, 0xB0($v1)
    ctx->pc = 0x15cbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 176), GPR_U32(ctx, 0));
    ctx->pc = 0x15cbf4u;
}
