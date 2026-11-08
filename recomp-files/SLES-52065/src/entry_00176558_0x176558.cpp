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

// Function: entry_00176558
// Address: 0x176558 - 0x176588
void entry_00176558_0x176558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00176558_0x176558");
#endif

    ctx->pc = 0x176558u;

    // 0x176558: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x176558u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x17655c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x17655cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x176560: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x176560u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x176564: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x176564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x176568: 0xc4410044  lwc1        $f1, 0x44($v0)
    ctx->pc = 0x176568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17656c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17656cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x176570: 0x0  nop
    ctx->pc = 0x176570u;
    // NOP
    // 0x176574: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x176574u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x176578: 0x0  nop
    ctx->pc = 0x176578u;
    // NOP
    // 0x17657c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x17657Cu;
    {
        const bool branch_taken_0x17657c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x176580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17657Cu;
        // 0x176580: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17657c) {
            ctx->pc = 0x176588u;
            return;
        }
    }
    ctx->pc = 0x176584u;
    // 0x176584: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x176584u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x176588u;
}
