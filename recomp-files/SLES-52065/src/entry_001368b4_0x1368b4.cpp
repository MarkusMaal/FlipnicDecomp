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

// Function: entry_001368b4
// Address: 0x1368b4 - 0x136904
void entry_001368b4_0x1368b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001368b4_0x1368b4");
#endif

    switch (ctx->pc) {
        case 0x1368d8u: goto label_1368d8;
        default: break;
    }

    ctx->pc = 0x1368b4u;

    // 0x1368b4: 0x92230055  lbu         $v1, 0x55($s1)
    ctx->pc = 0x1368b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 85)));
    // 0x1368b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1368b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1368bc: 0x146200f7  bne         $v1, $v0, . + 4 + (0xF7 << 2)
    ctx->pc = 0x1368BCu;
    {
        const bool branch_taken_0x1368bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1368C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1368BCu;
        // 0x1368c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1368bc) {
            ctx->pc = 0x136C9Cu;
            return;
        }
    }
    ctx->pc = 0x1368C4u;
    // 0x1368c4: 0x92220130  lbu         $v0, 0x130($s1)
    ctx->pc = 0x1368c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x1368c8: 0x144000f3  bnez        $v0, . + 4 + (0xF3 << 2)
    ctx->pc = 0x1368C8u;
    {
        const bool branch_taken_0x1368c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1368c8) {
            ctx->pc = 0x136C98u;
            return;
        }
    }
    ctx->pc = 0x1368D0u;
    // 0x1368d0: 0xc0607a8  jal         func_181EA0
    ctx->pc = 0x1368D0u;
    SET_GPR_U32(ctx, 31, 0x1368D8u);
    ctx->pc = 0x181EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181EA0u, 0x1368D0u, 0x1368D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1368D8u;
label_1368d8:
    // 0x1368d8: 0x104000ed  beqz        $v0, . + 4 + (0xED << 2)
    ctx->pc = 0x1368D8u;
    {
        const bool branch_taken_0x1368d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1368DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1368D8u;
        // 0x1368dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1368d8) {
            ctx->pc = 0x136C90u;
            return;
        }
    }
    ctx->pc = 0x1368E0u;
    // 0x1368e0: 0xc6210074  lwc1        $f1, 0x74($s1)
    ctx->pc = 0x1368e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1368e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1368e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1368e8: 0x0  nop
    ctx->pc = 0x1368e8u;
    // NOP
    // 0x1368ec: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1368ecu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1368f0: 0x0  nop
    ctx->pc = 0x1368f0u;
    // NOP
    // 0x1368f4: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1368F4u;
    {
        const bool branch_taken_0x1368f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1368f4) {
            ctx->pc = 0x136904u;
            return;
        }
    }
    ctx->pc = 0x1368FCu;
    // 0x1368fc: 0xc04e8ac  jal         func_13A2B0
    ctx->pc = 0x1368FCu;
    SET_GPR_U32(ctx, 31, 0x136904u);
    ctx->pc = 0x13A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A2B0u, 0x1368FCu, 0x136904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136904u;
}
