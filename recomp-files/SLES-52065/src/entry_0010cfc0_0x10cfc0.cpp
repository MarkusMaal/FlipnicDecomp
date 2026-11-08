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

// Function: entry_0010cfc0
// Address: 0x10cfc0 - 0x10cff0
void entry_0010cfc0_0x10cfc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010cfc0_0x10cfc0");
#endif

    ctx->pc = 0x10cfc0u;

    // 0x10cfc0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x10cfc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x10cfc4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x10cfc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x10cfc8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x10cfc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x10cfcc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x10cfccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x10cfd0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x10cfd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x10cfd4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10cfd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cfd8: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x10cfd8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x10cfdc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x10cfdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cfe0: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x10cfe0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x10cfe4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x10cfe4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x10cfe8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x10CFE8u;
    {
        const bool branch_taken_0x10cfe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CFE8u;
        // 0x10cfec: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cfe8) {
            ctx->pc = 0x10D018u;
            return;
        }
    }
    ctx->pc = 0x10CFF0u;
}
