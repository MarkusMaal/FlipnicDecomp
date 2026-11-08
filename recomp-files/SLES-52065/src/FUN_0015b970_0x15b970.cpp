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

// Function: FUN_0015b970
// Address: 0x15b970 - 0x15ba58
void FUN_0015b970_0x15b970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0015b970_0x15b970");
#endif

    switch (ctx->pc) {
        case 0x15b9a4u: goto label_15b9a4;
        case 0x15b9d0u: goto label_15b9d0;
        case 0x15b9f0u: goto label_15b9f0;
        case 0x15ba3cu: goto label_15ba3c;
        default: break;
    }

    ctx->pc = 0x15b970u;

    // 0x15b970: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x15b970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x15b974: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x15b974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x15b978: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15b978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15b97c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15b97cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15b980: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x15b980u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b984: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15b984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15b988: 0x84820210  lh          $v0, 0x210($a0)
    ctx->pc = 0x15b988u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 528)));
    // 0x15b98c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15B98Cu;
    {
        const bool branch_taken_0x15b98c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B98Cu;
        // 0x15b990: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b98c) {
            ctx->pc = 0x15B99Cu;
            goto label_15b99c;
        }
    }
    ctx->pc = 0x15B994u;
    // 0x15b994: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x15B994u;
    {
        const bool branch_taken_0x15b994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B994u;
        // 0x15b998: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b994) {
            ctx->pc = 0x15BA40u;
            goto label_15ba40;
        }
    }
    ctx->pc = 0x15B99Cu;
label_15b99c:
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
            goto label_15ba3c;
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
            goto label_15ba2c;
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
            goto label_15ba1c;
        }
    }
    ctx->pc = 0x15BA18u;
    // 0x15ba18: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x15ba18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_15ba1c:
    // 0x15ba1c: 0xa6420218  sh          $v0, 0x218($s2)
    ctx->pc = 0x15ba1cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 536), (uint16_t)GPR_U32(ctx, 2));
    // 0x15ba20: 0x86420212  lh          $v0, 0x212($s2)
    ctx->pc = 0x15ba20u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 530)));
    // 0x15ba24: 0xa6420210  sh          $v0, 0x210($s2)
    ctx->pc = 0x15ba24u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 528), (uint16_t)GPR_U32(ctx, 2));
    // 0x15ba28: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x15ba28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_15ba2c:
    // 0x15ba2c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x15ba2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x15ba30: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x15ba30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15ba34: 0xc055dac  jal         func_1576B0
    ctx->pc = 0x15BA34u;
    SET_GPR_U32(ctx, 31, 0x15BA3Cu);
    ctx->pc = 0x15BA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15BA34u;
    // 0x15ba38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1576B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1576B0u, 0x15BA34u, 0x15BA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BA3Cu;
label_15ba3c:
    // 0x15ba3c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x15ba3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15ba40:
    // 0x15ba40: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x15ba40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15ba44: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15ba44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15ba48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15ba48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15ba4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15ba4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15ba50: 0x3e00008  jr          $ra
    ctx->pc = 0x15BA50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15BA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BA50u;
        // 0x15ba54: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15BA50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15BA58u;
}
