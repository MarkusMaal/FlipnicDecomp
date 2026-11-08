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

// Function: entry_0015b99c
// Address: 0x15b99c - 0x15ba1c
void entry_0015b99c_0x15b99c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015b99c_0x15b99c");
#endif

    switch (ctx->pc) {
        case 0x15b9a4u: goto label_15b9a4;
        case 0x15b9d0u: goto label_15b9d0;
        case 0x15b9f0u: goto label_15b9f0;
        default: break;
    }

    ctx->pc = 0x15b99cu;

    // 0x15b99c: 0xc056b00  jal         func_15AC00
    ctx->pc = 0x15B99Cu;
    SET_GPR_U32(ctx, 31, 0x15B9A4u);
    ctx->pc = 0x15AC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15AC00u, 0x15B99Cu, 0x15B9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B9A4u;
label_15b9a4:
    // 0x15b9a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15b9a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b9a8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15b9a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15b9ac: 0x16050023  bne         $s0, $a1, . + 4 + (0x23 << 2)
    ctx->pc = 0x15B9ACu;
    {
        const bool branch_taken_0x15b9ac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 5));
        if (branch_taken_0x15b9ac) {
            ctx->pc = 0x15BA3Cu;
            return;
        }
    }
    ctx->pc = 0x15B9B4u;
    // 0x15b9b4: 0x86430216  lh          $v1, 0x216($s2)
    ctx->pc = 0x15b9b4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 534)));
    // 0x15b9b8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x15b9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x15b9bc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x15b9bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15b9c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15b9c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b9c4: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x15b9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x15b9c8: 0xc0425a4  jal         func_109690
    ctx->pc = 0x15B9C8u;
    SET_GPR_U32(ctx, 31, 0x15B9D0u);
    ctx->pc = 0x15B9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B9C8u;
    // 0x15b9cc: 0xa6420216  sh          $v0, 0x216($s2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 18), 534), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x15B9C8u, 0x15B9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B9D0u;
label_15b9d0:
    // 0x15b9d0: 0x86420216  lh          $v0, 0x216($s2)
    ctx->pc = 0x15b9d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 534)));
    // 0x15b9d4: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x15B9D4u;
    {
        const bool branch_taken_0x15b9d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B9D4u;
        // 0x15b9d8: 0x3c023dcc  lui         $v0, 0x3DCC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b9d4) {
            ctx->pc = 0x15BA2Cu;
            return;
        }
    }
    ctx->pc = 0x15B9DCu;
    // 0x15b9dc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x15b9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x15b9e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15b9e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b9e4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x15b9e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15b9e8: 0xc0425a4  jal         func_109690
    ctx->pc = 0x15B9E8u;
    SET_GPR_U32(ctx, 31, 0x15B9F0u);
    ctx->pc = 0x15B9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B9E8u;
    // 0x15b9ec: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x15B9E8u, 0x15B9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B9F0u;
label_15b9f0:
    // 0x15b9f0: 0xc7808024  lwc1        $f0, -0x7FDC($gp)
    ctx->pc = 0x15b9f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15b9f4: 0x3c0242ba  lui         $v0, 0x42BA
    ctx->pc = 0x15b9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17082 << 16));
    // 0x15b9f8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15b9f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15b9fc: 0x0  nop
    ctx->pc = 0x15b9fcu;
    // NOP
    // 0x15ba00: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x15ba00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x15ba04: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x15ba04u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x15ba08: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x15ba08u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x15ba0c: 0x0  nop
    ctx->pc = 0x15ba0cu;
    // NOP
    // 0x15ba10: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x15BA10u;
    {
        const bool branch_taken_0x15ba10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15ba10) {
            ctx->pc = 0x15BA1Cu;
            return;
        }
    }
    ctx->pc = 0x15BA18u;
    // 0x15ba18: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x15ba18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->pc = 0x15ba1cu;
}
