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

// Function: caseD_3
// Address: 0x172d38 - 0x172d84
void caseD_3_0x172d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x172d38");
#endif

    switch (ctx->pc) {
        case 0x172d40u: goto label_172d40;
        default: break;
    }

    ctx->pc = 0x172d38u;

    // 0x172d38: 0xc05cc98  jal         func_173260
    ctx->pc = 0x172D38u;
    SET_GPR_U32(ctx, 31, 0x172D40u);
    ctx->pc = 0x173260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173260u, 0x172D38u, 0x172D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172D40u;
label_172d40:
    // 0x172d40: 0x8e226008  lw          $v0, 0x6008($s1)
    ctx->pc = 0x172d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24584)));
    // 0x172d44: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x172d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x172d48: 0x1c400083  bgtz        $v0, . + 4 + (0x83 << 2)
    ctx->pc = 0x172D48u;
    {
        const bool branch_taken_0x172d48 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x172D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172D48u;
        // 0x172d4c: 0xae226008  sw          $v0, 0x6008($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172d48) {
            ctx->pc = 0x172F58u;
            return;
        }
    }
    ctx->pc = 0x172D50u;
    // 0x172d50: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x172d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172d54: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x172d54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x172d58: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x172d58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x172d5c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x172d5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x172d60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x172d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x172d64: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x172d64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x172d68: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x172d68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x172d6c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x172d6cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x172d70: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x172d70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x172d74: 0x0  nop
    ctx->pc = 0x172d74u;
    // NOP
    // 0x172d78: 0xae236008  sw          $v1, 0x6008($s1)
    ctx->pc = 0x172d78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24584), GPR_U32(ctx, 3));
    // 0x172d7c: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x172D7Cu;
    {
        const bool branch_taken_0x172d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172D7Cu;
        // 0x172d80: 0xae226014  sw          $v0, 0x6014($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24596), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172d7c) {
            ctx->pc = 0x172F58u;
            return;
        }
    }
    ctx->pc = 0x172D84u;
}
