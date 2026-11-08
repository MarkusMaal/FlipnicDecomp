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

// Function: entry_001963d0
// Address: 0x1963d0 - 0x19644c
void entry_001963d0_0x1963d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001963d0_0x1963d0");
#endif

    switch (ctx->pc) {
        case 0x1963d8u: goto label_1963d8;
        case 0x1963e4u: goto label_1963e4;
        case 0x19640cu: goto label_19640c;
        case 0x196418u: goto label_196418;
        case 0x196440u: goto label_196440;
        default: break;
    }

    ctx->pc = 0x1963d0u;

    // 0x1963d0: 0xc05fe4c  jal         func_17F930
    ctx->pc = 0x1963D0u;
    SET_GPR_U32(ctx, 31, 0x1963D8u);
    ctx->pc = 0x17F930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F930u, 0x1963D0u, 0x1963D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1963D8u;
label_1963d8:
    // 0x1963d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1963d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1963dc: 0xc05fec0  jal         func_17FB00
    ctx->pc = 0x1963DCu;
    SET_GPR_U32(ctx, 31, 0x1963E4u);
    ctx->pc = 0x1963E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1963DCu;
    // 0x1963e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17FB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17FB00u, 0x1963DCu, 0x1963E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1963E4u;
label_1963e4:
    // 0x1963e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1963e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1963e8: 0x8e630670  lw          $v1, 0x670($s3)
    ctx->pc = 0x1963e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1648)));
    // 0x1963ec: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x1963ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1963f0: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1963f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1963f4: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1963f4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1963f8: 0x0  nop
    ctx->pc = 0x1963f8u;
    // NOP
    // 0x1963fc: 0x0  nop
    ctx->pc = 0x1963fcu;
    // NOP
    // 0x196400: 0x3810  mfhi        $a3
    ctx->pc = 0x196400u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x196404: 0xc05ffac  jal         func_17FEB0
    ctx->pc = 0x196404u;
    SET_GPR_U32(ctx, 31, 0x19640Cu);
    ctx->pc = 0x196408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196404u;
    // 0x196408: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17FEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17FEB0u, 0x196404u, 0x19640Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19640Cu;
label_19640c:
    // 0x19640c: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x19640cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x196410: 0xc057f4c  jal         func_15FD30
    ctx->pc = 0x196410u;
    SET_GPR_U32(ctx, 31, 0x196418u);
    ctx->pc = 0x196414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196410u;
    // 0x196414: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15FD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15FD30u, 0x196410u, 0x196418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196418u;
label_196418:
    // 0x196418: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x196418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19641c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x19641cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x196420: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x196420u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x196424: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x196424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196428: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x196428u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x19642c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x19642cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x196430: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x196430u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x196434: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x196434u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x196438: 0xc063de0  jal         func_18F780
    ctx->pc = 0x196438u;
    SET_GPR_U32(ctx, 31, 0x196440u);
    ctx->pc = 0x19643Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196438u;
    // 0x19643c: 0x3c058000  lui         $a1, 0x8000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F780u, 0x196438u, 0x196440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196440u;
label_196440:
    // 0x196440: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x196440u;
    {
        const bool branch_taken_0x196440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x196440) {
            ctx->pc = 0x196614u;
            return;
        }
    }
    ctx->pc = 0x196448u;
    // 0x196448: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x196448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19644cu;
}
