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

// Function: entry_00178004
// Address: 0x178004 - 0x178038
void entry_00178004_0x178004(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00178004_0x178004");
#endif

    ctx->pc = 0x178004u;

    // 0x178004: 0xe6400010  swc1        $f0, 0x10($s2)
    ctx->pc = 0x178004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x178008: 0x3c04c0f0  lui         $a0, 0xC0F0
    ctx->pc = 0x178008u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49392 << 16));
    // 0x17800c: 0x46006007  neg.s       $f0, $f12
    ctx->pc = 0x17800cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[12]);
    // 0x178010: 0x3c0340f0  lui         $v1, 0x40F0
    ctx->pc = 0x178010u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16624 << 16));
    // 0x178014: 0xe640001c  swc1        $f0, 0x1C($s2)
    ctx->pc = 0x178014u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
    // 0x178018: 0x241001ff  addiu       $s0, $zero, 0x1FF
    ctx->pc = 0x178018u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
    // 0x17801c: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x17801cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x178020: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x178020u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178024: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x178024u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x178028: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x178028u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x17802c: 0xae440008  sw          $a0, 0x8($s2)
    ctx->pc = 0x17802cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 4));
    // 0x178030: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x178030u;
    {
        const bool branch_taken_0x178030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178030u;
        // 0x178034: 0xae43000c  sw          $v1, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178030) {
            ctx->pc = 0x17808Cu;
            return;
        }
    }
    ctx->pc = 0x178038u;
}
