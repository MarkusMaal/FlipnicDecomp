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

// Function: entry_001708ac
// Address: 0x1708ac - 0x1708e0
void entry_001708ac_0x1708ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001708ac_0x1708ac");
#endif

    ctx->pc = 0x1708acu;

    // 0x1708ac: 0x46040041  sub.s       $f1, $f0, $f4
    ctx->pc = 0x1708acu;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x1708b0: 0xc600025c  lwc1        $f0, 0x25C($s0)
    ctx->pc = 0x1708b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1708b4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1708b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1708b8: 0xe6000250  swc1        $f0, 0x250($s0)
    ctx->pc = 0x1708b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 592), bits); }
    // 0x1708bc: 0x93828610  lbu         $v0, -0x79F0($gp)
    ctx->pc = 0x1708bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936080)));
    // 0x1708c0: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1708C0u;
    {
        const bool branch_taken_0x1708c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1708c0) {
            ctx->pc = 0x17092Cu;
            return;
        }
    }
    ctx->pc = 0x1708C8u;
    // 0x1708c8: 0x8e02022c  lw          $v0, 0x22C($s0)
    ctx->pc = 0x1708c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 556)));
    // 0x1708cc: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1708ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1708d0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1708D0u;
    {
        const bool branch_taken_0x1708d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1708D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1708D0u;
        // 0x1708d4: 0x24c6f4f8  addiu       $a2, $a2, -0xB08 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964472));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1708d0) {
            ctx->pc = 0x1708E0u;
            return;
        }
    }
    ctx->pc = 0x1708D8u;
    // 0x1708d8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1708D8u;
    {
        const bool branch_taken_0x1708d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1708DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1708D8u;
        // 0x1708dc: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1708d8) {
            ctx->pc = 0x1708E8u;
            return;
        }
    }
    ctx->pc = 0x1708E0u;
}
