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

// Function: entry_00161d58
// Address: 0x161d58 - 0x161da0
void entry_00161d58_0x161d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161d58_0x161d58");
#endif

    ctx->pc = 0x161d58u;

    // 0x161d58: 0x86a301f4  lh          $v1, 0x1F4($s5)
    ctx->pc = 0x161d58u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 500)));
    // 0x161d5c: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x161d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
    // 0x161d60: 0x34445556  ori         $a0, $v0, 0x5556
    ctx->pc = 0x161d60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21846);
    // 0x161d64: 0x830018  mult        $zero, $a0, $v1
    ctx->pc = 0x161d64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x161d68: 0x0  nop
    ctx->pc = 0x161d68u;
    // NOP
    // 0x161d6c: 0x0  nop
    ctx->pc = 0x161d6cu;
    // NOP
    // 0x161d70: 0x1010  mfhi        $v0
    ctx->pc = 0x161d70u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x161d74: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x161d74u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x161d78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x161d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x161d7c: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x161d7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x161d80: 0x1440ffcd  bnez        $v0, . + 4 + (-0x33 << 2)
    ctx->pc = 0x161D80u;
    {
        const bool branch_taken_0x161d80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x161D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161D80u;
        // 0x161d84: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161d80) {
            ctx->pc = 0x161CB8u;
            return;
        }
    }
    ctx->pc = 0x161D88u;
    // 0x161d88: 0x8ea50228  lw          $a1, 0x228($s5)
    ctx->pc = 0x161d88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 552)));
    // 0x161d8c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x161d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x161d90: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x161d90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x161d94: 0x2c0a02d  daddu       $s4, $s6, $zero
    ctx->pc = 0x161d94u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161d98: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x161D98u;
    {
        const bool branch_taken_0x161d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161D98u;
        // 0x161d9c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161d98) {
            ctx->pc = 0x161DD8u;
            return;
        }
    }
    ctx->pc = 0x161DA0u;
}
