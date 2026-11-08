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

// Function: entry_0019656c
// Address: 0x19656c - 0x1965d8
void entry_0019656c_0x19656c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019656c_0x19656c");
#endif

    switch (ctx->pc) {
        case 0x196580u: goto label_196580;
        case 0x1965a8u: goto label_1965a8;
        case 0x1965d0u: goto label_1965d0;
        default: break;
    }

    ctx->pc = 0x19656cu;

    // 0x19656c: 0x8e620664  lw          $v0, 0x664($s3)
    ctx->pc = 0x19656cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1636)));
    // 0x196570: 0x8c450068  lw          $a1, 0x68($v0)
    ctx->pc = 0x196570u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x196574: 0x8c460064  lw          $a2, 0x64($v0)
    ctx->pc = 0x196574u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x196578: 0xc057040  jal         func_15C100
    ctx->pc = 0x196578u;
    SET_GPR_U32(ctx, 31, 0x196580u);
    ctx->pc = 0x19657Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196578u;
    // 0x19657c: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x196578u, 0x196580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196580u;
label_196580:
    // 0x196580: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x196580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x196584: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x196584u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x196588: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x196588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19658c: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x19658cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
    // 0x196590: 0x8c6301fc  lw          $v1, 0x1FC($v1)
    ctx->pc = 0x196590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 508)));
    // 0x196594: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x196594u;
    {
        const bool branch_taken_0x196594 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x196594) {
            ctx->pc = 0x196614u;
            return;
        }
    }
    ctx->pc = 0x19659Cu;
    // 0x19659c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19659cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1965a0: 0xc063e08  jal         func_18F820
    ctx->pc = 0x1965A0u;
    SET_GPR_U32(ctx, 31, 0x1965A8u);
    ctx->pc = 0x1965A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1965A0u;
    // 0x1965a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1965A0u, 0x1965A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1965A8u;
label_1965a8:
    // 0x1965a8: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1965a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1965ac: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1965acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1965b0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1965b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1965b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1965b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1965b8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1965b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1965bc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1965bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1965c0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1965c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1965c4: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1965c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1965c8: 0xc063de0  jal         func_18F780
    ctx->pc = 0x1965C8u;
    SET_GPR_U32(ctx, 31, 0x1965D0u);
    ctx->pc = 0x1965CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1965C8u;
    // 0x1965cc: 0x3c058000  lui         $a1, 0x8000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F780u, 0x1965C8u, 0x1965D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1965D0u;
label_1965d0:
    // 0x1965d0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1965D0u;
    {
        const bool branch_taken_0x1965d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1965d0) {
            ctx->pc = 0x196614u;
            return;
        }
    }
    ctx->pc = 0x1965D8u;
}
