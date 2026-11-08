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

// Function: FUN_0018cea0
// Address: 0x18cea0 - 0x18d390
void FUN_0018cea0_0x18cea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0018cea0_0x18cea0");
#endif

    switch (ctx->pc) {
        case 0x18ced0u: goto label_18ced0;
        case 0x18cedcu: goto label_18cedc;
        case 0x18cf54u: goto label_18cf54;
        case 0x18cf68u: goto label_18cf68;
        case 0x18cfa4u: goto label_18cfa4;
        case 0x18d074u: goto label_18d074;
        case 0x18d080u: goto label_18d080;
        case 0x18d0b0u: goto label_18d0b0;
        case 0x18d0bcu: goto label_18d0bc;
        case 0x18d124u: goto label_18d124;
        case 0x18d134u: goto label_18d134;
        case 0x18d148u: goto label_18d148;
        case 0x18d154u: goto label_18d154;
        case 0x18d15cu: goto label_18d15c;
        case 0x18d17cu: goto label_18d17c;
        case 0x18d188u: goto label_18d188;
        case 0x18d190u: goto label_18d190;
        case 0x18d1f0u: goto label_18d1f0;
        case 0x18d218u: goto label_18d218;
        case 0x18d228u: goto label_18d228;
        case 0x18d23cu: goto label_18d23c;
        case 0x18d248u: goto label_18d248;
        case 0x18d250u: goto label_18d250;
        case 0x18d260u: goto label_18d260;
        case 0x18d26cu: goto label_18d26c;
        case 0x18d274u: goto label_18d274;
        case 0x18d294u: goto label_18d294;
        case 0x18d2c8u: goto label_18d2c8;
        case 0x18d338u: goto label_18d338;
        case 0x18d344u: goto label_18d344;
        case 0x18d354u: goto label_18d354;
        case 0x18d364u: goto label_18d364;
        case 0x18d374u: goto label_18d374;
        default: break;
    }

    ctx->pc = 0x18cea0u;

    // 0x18cea0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x18cea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x18cea4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x18cea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x18cea8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x18cea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x18ceac: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x18ceacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x18ceb0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x18ceb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ceb4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x18ceb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ceb8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x18ceb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x18cebc: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x18cebcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x18cec0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x18cec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18cec4: 0x24a5fce0  addiu       $a1, $a1, -0x320
    ctx->pc = 0x18cec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966496));
    // 0x18cec8: 0xc05f878  jal         func_17E1E0
    ctx->pc = 0x18CEC8u;
    SET_GPR_U32(ctx, 31, 0x18CED0u);
    ctx->pc = 0x18CECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CEC8u;
    // 0x18cecc: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E1E0u, 0x18CEC8u, 0x18CED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CED0u;
label_18ced0:
    // 0x18ced0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18ced0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ced4: 0xc063dd4  jal         func_18F750
    ctx->pc = 0x18CED4u;
    SET_GPR_U32(ctx, 31, 0x18CEDCu);
    ctx->pc = 0x18CED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CED4u;
    // 0x18ced8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F750u, 0x18CED4u, 0x18CEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CEDCu;
label_18cedc:
    // 0x18cedc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x18cedcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x18cee0: 0x10430115  beq         $v0, $v1, . + 4 + (0x115 << 2)
    ctx->pc = 0x18CEE0u;
    {
        const bool branch_taken_0x18cee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x18CEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CEE0u;
        // 0x18cee4: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cee0) {
            ctx->pc = 0x18D338u;
            goto label_18d338;
        }
    }
    ctx->pc = 0x18CEE8u;
    // 0x18cee8: 0x1043010c  beq         $v0, $v1, . + 4 + (0x10C << 2)
    ctx->pc = 0x18CEE8u;
    {
        const bool branch_taken_0x18cee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x18CEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CEE8u;
        // 0x18ceec: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cee8) {
            ctx->pc = 0x18D31Cu;
            goto label_18d31c;
        }
    }
    ctx->pc = 0x18CEF0u;
    // 0x18cef0: 0x104500e8  beq         $v0, $a1, . + 4 + (0xE8 << 2)
    ctx->pc = 0x18CEF0u;
    {
        const bool branch_taken_0x18cef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x18CEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CEF0u;
        // 0x18cef4: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cef0) {
            ctx->pc = 0x18D294u;
            goto label_18d294;
        }
    }
    ctx->pc = 0x18CEF8u;
    // 0x18cef8: 0x104300e4  beq         $v0, $v1, . + 4 + (0xE4 << 2)
    ctx->pc = 0x18CEF8u;
    {
        const bool branch_taken_0x18cef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x18CEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CEF8u;
        // 0x18cefc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cef8) {
            ctx->pc = 0x18D28Cu;
            goto label_18d28c;
        }
    }
    ctx->pc = 0x18CF00u;
    // 0x18cf00: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x18cf00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x18cf04: 0x104300a4  beq         $v0, $v1, . + 4 + (0xA4 << 2)
    ctx->pc = 0x18CF04u;
    {
        const bool branch_taken_0x18cf04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x18CF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CF04u;
        // 0x18cf08: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cf04) {
            ctx->pc = 0x18D198u;
            goto label_18d198;
        }
    }
    ctx->pc = 0x18CF0Cu;
    // 0x18cf0c: 0x104300a2  beq         $v0, $v1, . + 4 + (0xA2 << 2)
    ctx->pc = 0x18CF0Cu;
    {
        const bool branch_taken_0x18cf0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x18cf0c) {
            ctx->pc = 0x18D198u;
            goto label_18d198;
        }
    }
    ctx->pc = 0x18CF14u;
    // 0x18cf14: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x18cf14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x18cf18: 0x1043006b  beq         $v0, $v1, . + 4 + (0x6B << 2)
    ctx->pc = 0x18CF18u;
    {
        const bool branch_taken_0x18cf18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x18CF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CF18u;
        // 0x18cf1c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cf18) {
            ctx->pc = 0x18D0C8u;
            goto label_18d0c8;
        }
    }
    ctx->pc = 0x18CF20u;
    // 0x18cf20: 0x10430069  beq         $v0, $v1, . + 4 + (0x69 << 2)
    ctx->pc = 0x18CF20u;
    {
        const bool branch_taken_0x18cf20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x18cf20) {
            ctx->pc = 0x18D0C8u;
            goto label_18d0c8;
        }
    }
    ctx->pc = 0x18CF28u;
    // 0x18cf28: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x18cf28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18cf2c: 0x10430035  beq         $v0, $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x18CF2Cu;
    {
        const bool branch_taken_0x18cf2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x18CF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CF2Cu;
        // 0x18cf30: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cf2c) {
            ctx->pc = 0x18D004u;
            goto label_18d004;
        }
    }
    ctx->pc = 0x18CF34u;
    // 0x18cf34: 0x1043000e  beq         $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x18CF34u;
    {
        const bool branch_taken_0x18cf34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x18cf34) {
            ctx->pc = 0x18CF70u;
            goto label_18cf70;
        }
    }
    ctx->pc = 0x18CF3Cu;
    // 0x18cf3c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18CF3Cu;
    {
        const bool branch_taken_0x18cf3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CF3Cu;
        // 0x18cf40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cf3c) {
            ctx->pc = 0x18CF4Cu;
            goto label_18cf4c;
        }
    }
    ctx->pc = 0x18CF44u;
    // 0x18cf44: 0x100000fd  b           . + 4 + (0xFD << 2)
    ctx->pc = 0x18CF44u;
    {
        const bool branch_taken_0x18cf44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CF44u;
        // 0x18cf48: 0xc64c0488  lwc1        $f12, 0x488($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cf44) {
            ctx->pc = 0x18D33Cu;
            goto label_18d33c;
        }
    }
    ctx->pc = 0x18CF4Cu;
label_18cf4c:
    // 0x18cf4c: 0xc053284  jal         func_14CA10
    ctx->pc = 0x18CF4Cu;
    SET_GPR_U32(ctx, 31, 0x18CF54u);
    ctx->pc = 0x14CA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CA10u, 0x18CF4Cu, 0x18CF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CF54u;
label_18cf54:
    // 0x18cf54: 0xe6400488  swc1        $f0, 0x488($s2)
    ctx->pc = 0x18cf54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1160), bits); }
    // 0x18cf58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18cf58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cf5c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x18cf5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18cf60: 0xc063e08  jal         func_18F820
    ctx->pc = 0x18CF60u;
    SET_GPR_U32(ctx, 31, 0x18CF68u);
    ctx->pc = 0x18CF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CF60u;
    // 0x18cf64: 0xae400490  sw          $zero, 0x490($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 1168), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x18CF60u, 0x18CF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CF68u;
label_18cf68:
    // 0x18cf68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18cf68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18cf6c: 0xae422710  sw          $v0, 0x2710($s2)
    ctx->pc = 0x18cf6cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 10000), GPR_U32(ctx, 2));
label_18cf70:
    // 0x18cf70: 0xc6410490  lwc1        $f1, 0x490($s2)
    ctx->pc = 0x18cf70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18cf74: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18cf74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x18cf78: 0xc6400498  lwc1        $f0, 0x498($s2)
    ctx->pc = 0x18cf78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18cf7c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x18cf7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18cf80: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18cf80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18cf84: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x18cf84u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18cf88: 0x0  nop
    ctx->pc = 0x18cf88u;
    // NOP
    // 0x18cf8c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x18CF8Cu;
    {
        const bool branch_taken_0x18cf8c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18CF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CF8Cu;
        // 0x18cf90: 0xe6400490  swc1        $f0, 0x490($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1168), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cf8c) {
            ctx->pc = 0x18CFA4u;
            goto label_18cfa4;
        }
    }
    ctx->pc = 0x18CF94u;
    // 0x18cf94: 0xe6420490  swc1        $f2, 0x490($s2)
    ctx->pc = 0x18cf94u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1168), bits); }
    // 0x18cf98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18cf98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cf9c: 0xc063e08  jal         func_18F820
    ctx->pc = 0x18CF9Cu;
    SET_GPR_U32(ctx, 31, 0x18CFA4u);
    ctx->pc = 0x18CFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CF9Cu;
    // 0x18cfa0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x18CF9Cu, 0x18CFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CFA4u;
label_18cfa4:
    // 0x18cfa4: 0xc6410490  lwc1        $f1, 0x490($s2)
    ctx->pc = 0x18cfa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18cfa8: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x18cfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x18cfac: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x18cfacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18cfb0: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x18cfb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x18cfb4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18cfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x18cfb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18cfb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18cfbc: 0x0  nop
    ctx->pc = 0x18cfbcu;
    // NOP
    // 0x18cfc0: 0xe64104a0  swc1        $f1, 0x4A0($s2)
    ctx->pc = 0x18cfc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1184), bits); }
    // 0x18cfc4: 0xc6410490  lwc1        $f1, 0x490($s2)
    ctx->pc = 0x18cfc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18cfc8: 0xe64104a4  swc1        $f1, 0x4A4($s2)
    ctx->pc = 0x18cfc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1188), bits); }
    // 0x18cfcc: 0xc6410490  lwc1        $f1, 0x490($s2)
    ctx->pc = 0x18cfccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18cfd0: 0xe64104a8  swc1        $f1, 0x4A8($s2)
    ctx->pc = 0x18cfd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1192), bits); }
    // 0x18cfd4: 0xc6410490  lwc1        $f1, 0x490($s2)
    ctx->pc = 0x18cfd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18cfd8: 0xe64104bc  swc1        $f1, 0x4BC($s2)
    ctx->pc = 0x18cfd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1212), bits); }
    // 0x18cfdc: 0xc6410490  lwc1        $f1, 0x490($s2)
    ctx->pc = 0x18cfdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18cfe0: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x18cfe0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x18cfe4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x18cfe4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x18cfe8: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x18cfe8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18cfec: 0x0  nop
    ctx->pc = 0x18cfecu;
    // NOP
    // 0x18cff0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x18CFF0u;
    {
        const bool branch_taken_0x18cff0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18cff0) {
            ctx->pc = 0x18CFFCu;
            goto label_18cffc;
        }
    }
    ctx->pc = 0x18CFF8u;
    // 0x18cff8: 0x46001806  mov.s       $f0, $f3
    ctx->pc = 0x18cff8u;
    ctx->f[0] = FPU_MOV_S(ctx->f[3]);
label_18cffc:
    // 0x18cffc: 0x100000ce  b           . + 4 + (0xCE << 2)
    ctx->pc = 0x18CFFCu;
    {
        const bool branch_taken_0x18cffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CFFCu;
        // 0x18d000: 0xe64004cc  swc1        $f0, 0x4CC($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1228), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cffc) {
            ctx->pc = 0x18D338u;
            goto label_18d338;
        }
    }
    ctx->pc = 0x18D004u;
label_18d004:
    // 0x18d004: 0xc6400488  lwc1        $f0, 0x488($s2)
    ctx->pc = 0x18d004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18d008: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x18d008u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18d00c: 0x0  nop
    ctx->pc = 0x18d00cu;
    // NOP
    // 0x18d010: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x18d010u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18d014: 0x0  nop
    ctx->pc = 0x18d014u;
    // NOP
    // 0x18d018: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x18D018u;
    {
        const bool branch_taken_0x18d018 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18d018) {
            ctx->pc = 0x18D024u;
            goto label_18d024;
        }
    }
    ctx->pc = 0x18D020u;
    // 0x18d020: 0xe6410488  swc1        $f1, 0x488($s2)
    ctx->pc = 0x18d020u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1160), bits); }
label_18d024:
    // 0x18d024: 0xc6400488  lwc1        $f0, 0x488($s2)
    ctx->pc = 0x18d024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18d028: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18d028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x18d02c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18d02cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18d030: 0x0  nop
    ctx->pc = 0x18d030u;
    // NOP
    // 0x18d034: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x18d034u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18d038: 0x0  nop
    ctx->pc = 0x18d038u;
    // NOP
    // 0x18d03c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x18D03Cu;
    {
        const bool branch_taken_0x18d03c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18d03c) {
            ctx->pc = 0x18D048u;
            goto label_18d048;
        }
    }
    ctx->pc = 0x18D044u;
    // 0x18d044: 0xe6410488  swc1        $f1, 0x488($s2)
    ctx->pc = 0x18d044u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1160), bits); }
label_18d048:
    // 0x18d048: 0xc6410488  lwc1        $f1, 0x488($s2)
    ctx->pc = 0x18d048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18d04c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18d04cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18d050: 0x0  nop
    ctx->pc = 0x18d050u;
    // NOP
    // 0x18d054: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x18d054u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18d058: 0x0  nop
    ctx->pc = 0x18d058u;
    // NOP
    // 0x18d05c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x18D05Cu;
    {
        const bool branch_taken_0x18d05c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18D060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D05Cu;
        // 0x18d060: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d05c) {
            ctx->pc = 0x18D088u;
            goto label_18d088;
        }
    }
    ctx->pc = 0x18D064u;
    // 0x18d064: 0x8e460454  lw          $a2, 0x454($s2)
    ctx->pc = 0x18d064u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1108)));
    // 0x18d068: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18d068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d06c: 0xc053274  jal         func_14C9D0
    ctx->pc = 0x18D06Cu;
    SET_GPR_U32(ctx, 31, 0x18D074u);
    ctx->pc = 0x18D070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D06Cu;
    // 0x18d070: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14C9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14C9D0u, 0x18D06Cu, 0x18D074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D074u;
label_18d074:
    // 0x18d074: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18d074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d078: 0xc063e08  jal         func_18F820
    ctx->pc = 0x18D078u;
    SET_GPR_U32(ctx, 31, 0x18D080u);
    ctx->pc = 0x18D07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D078u;
    // 0x18d07c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x18D078u, 0x18D080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D080u;
label_18d080:
    // 0x18d080: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x18D080u;
    {
        const bool branch_taken_0x18d080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D080u;
        // 0x18d084: 0xae400490  sw          $zero, 0x490($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1168), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d080) {
            ctx->pc = 0x18D0C0u;
            goto label_18d0c0;
        }
    }
    ctx->pc = 0x18D088u;
label_18d088:
    // 0x18d088: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18d088u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18d08c: 0x0  nop
    ctx->pc = 0x18d08cu;
    // NOP
    // 0x18d090: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x18d090u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18d094: 0x0  nop
    ctx->pc = 0x18d094u;
    // NOP
    // 0x18d098: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x18D098u;
    {
        const bool branch_taken_0x18d098 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18d098) {
            ctx->pc = 0x18D0BCu;
            goto label_18d0bc;
        }
    }
    ctx->pc = 0x18D0A0u;
    // 0x18d0a0: 0x8e460454  lw          $a2, 0x454($s2)
    ctx->pc = 0x18d0a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1108)));
    // 0x18d0a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18d0a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d0a8: 0xc053274  jal         func_14C9D0
    ctx->pc = 0x18D0A8u;
    SET_GPR_U32(ctx, 31, 0x18D0B0u);
    ctx->pc = 0x18D0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D0A8u;
    // 0x18d0ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14C9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14C9D0u, 0x18D0A8u, 0x18D0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D0B0u;
label_18d0b0:
    // 0x18d0b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18d0b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d0b4: 0xc063e08  jal         func_18F820
    ctx->pc = 0x18D0B4u;
    SET_GPR_U32(ctx, 31, 0x18D0BCu);
    ctx->pc = 0x18D0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D0B4u;
    // 0x18d0b8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x18D0B4u, 0x18D0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D0BCu;
label_18d0bc:
    // 0x18d0bc: 0xae400490  sw          $zero, 0x490($s2)
    ctx->pc = 0x18d0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1168), GPR_U32(ctx, 0));
label_18d0c0:
    // 0x18d0c0: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x18D0C0u;
    {
        const bool branch_taken_0x18d0c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D0C0u;
        // 0x18d0c4: 0xae40048c  sw          $zero, 0x48C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1164), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d0c0) {
            ctx->pc = 0x18D338u;
            goto label_18d338;
        }
    }
    ctx->pc = 0x18D0C8u;
label_18d0c8:
    // 0x18d0c8: 0xc6430490  lwc1        $f3, 0x490($s2)
    ctx->pc = 0x18d0c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18d0cc: 0x3c023d75  lui         $v0, 0x3D75
    ctx->pc = 0x18d0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15733 << 16));
    // 0x18d0d0: 0xc6410494  lwc1        $f1, 0x494($s2)
    ctx->pc = 0x18d0d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18d0d4: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x18d0d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x18d0d8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x18d0d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18d0dc: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x18d0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x18d0e0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18d0e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x18d0e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18d0e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18d0e8: 0x0  nop
    ctx->pc = 0x18d0e8u;
    // NOP
    // 0x18d0ec: 0x46011840  add.s       $f1, $f3, $f1
    ctx->pc = 0x18d0ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x18d0f0: 0xe6410490  swc1        $f1, 0x490($s2)
    ctx->pc = 0x18d0f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1168), bits); }
    // 0x18d0f4: 0xc643048c  lwc1        $f3, 0x48C($s2)
    ctx->pc = 0x18d0f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18d0f8: 0xc6410494  lwc1        $f1, 0x494($s2)
    ctx->pc = 0x18d0f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18d0fc: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x18d0fcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x18d100: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x18d100u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x18d104: 0xe641048c  swc1        $f1, 0x48C($s2)
    ctx->pc = 0x18d104u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1164), bits); }
    // 0x18d108: 0xc6410490  lwc1        $f1, 0x490($s2)
    ctx->pc = 0x18d108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18d10c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x18d10cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18d110: 0x0  nop
    ctx->pc = 0x18d110u;
    // NOP
    // 0x18d114: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x18D114u;
    {
        const bool branch_taken_0x18d114 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18D118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D114u;
        // 0x18d118: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d114) {
            ctx->pc = 0x18D12Cu;
            goto label_18d12c;
        }
    }
    ctx->pc = 0x18D11Cu;
    // 0x18d11c: 0xc063e14  jal         func_18F850
    ctx->pc = 0x18D11Cu;
    SET_GPR_U32(ctx, 31, 0x18D124u);
    ctx->pc = 0x18D120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D11Cu;
    // 0x18d120: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x18D11Cu, 0x18D124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D124u;
label_18d124:
    // 0x18d124: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x18D124u;
    {
        const bool branch_taken_0x18d124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d124) {
            ctx->pc = 0x18D338u;
            goto label_18d338;
        }
    }
    ctx->pc = 0x18D12Cu;
label_18d12c:
    // 0x18d12c: 0xc063dd4  jal         func_18F750
    ctx->pc = 0x18D12Cu;
    SET_GPR_U32(ctx, 31, 0x18D134u);
    ctx->pc = 0x18F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F750u, 0x18D12Cu, 0x18D134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D134u;
label_18d134:
    // 0x18d134: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x18d134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x18d138: 0x1443000e  bne         $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x18D138u;
    {
        const bool branch_taken_0x18d138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x18d138) {
            ctx->pc = 0x18D174u;
            goto label_18d174;
        }
    }
    ctx->pc = 0x18D140u;
    // 0x18d140: 0xc07eea2  jal         func_1FBA88
    ctx->pc = 0x18D140u;
    SET_GPR_U32(ctx, 31, 0x18D148u);
    ctx->pc = 0x18D144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D140u;
    // 0x18d144: 0xc64c048c  lwc1        $f12, 0x48C($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBA88u, 0x18D140u, 0x18D148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D148u;
label_18d148:
    // 0x18d148: 0xc64c0490  lwc1        $f12, 0x490($s2)
    ctx->pc = 0x18d148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18d14c: 0xc07eea2  jal         func_1FBA88
    ctx->pc = 0x18D14Cu;
    SET_GPR_U32(ctx, 31, 0x18D154u);
    ctx->pc = 0x18D150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D14Cu;
    // 0x18d150: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBA88u, 0x18D14Cu, 0x18D154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D154u;
label_18d154:
    // 0x18d154: 0xc07edfe  jal         func_1FB7F8
    ctx->pc = 0x18D154u;
    SET_GPR_U32(ctx, 31, 0x18D15Cu);
    ctx->pc = 0x18D158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D154u;
    // 0x18d158: 0x4600a302  mul.s       $f12, $f20, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB7F8u, 0x18D154u, 0x18D15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D15Cu;
label_18d15c:
    // 0x18d15c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18d15cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x18d160: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18d160u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18d164: 0x0  nop
    ctx->pc = 0x18d164u;
    // NOP
    // 0x18d168: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x18d168u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x18d16c: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x18D16Cu;
    {
        const bool branch_taken_0x18d16c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D16Cu;
        // 0x18d170: 0xe6400488  swc1        $f0, 0x488($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1160), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d16c) {
            ctx->pc = 0x18D338u;
            goto label_18d338;
        }
    }
    ctx->pc = 0x18D174u;
label_18d174:
    // 0x18d174: 0xc07eea2  jal         func_1FBA88
    ctx->pc = 0x18D174u;
    SET_GPR_U32(ctx, 31, 0x18D17Cu);
    ctx->pc = 0x18D178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D174u;
    // 0x18d178: 0xc64c048c  lwc1        $f12, 0x48C($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBA88u, 0x18D174u, 0x18D17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D17Cu;
label_18d17c:
    // 0x18d17c: 0xc64c0490  lwc1        $f12, 0x490($s2)
    ctx->pc = 0x18d17cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18d180: 0xc07eea2  jal         func_1FBA88
    ctx->pc = 0x18D180u;
    SET_GPR_U32(ctx, 31, 0x18D188u);
    ctx->pc = 0x18D184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D180u;
    // 0x18d184: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBA88u, 0x18D180u, 0x18D188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D188u;
label_18d188:
    // 0x18d188: 0xc07edfe  jal         func_1FB7F8
    ctx->pc = 0x18D188u;
    SET_GPR_U32(ctx, 31, 0x18D190u);
    ctx->pc = 0x18D18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D188u;
    // 0x18d18c: 0x4600a302  mul.s       $f12, $f20, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB7F8u, 0x18D188u, 0x18D190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D190u;
label_18d190:
    // 0x18d190: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x18D190u;
    {
        const bool branch_taken_0x18d190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D190u;
        // 0x18d194: 0xe6400488  swc1        $f0, 0x488($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1160), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d190) {
            ctx->pc = 0x18D338u;
            goto label_18d338;
        }
    }
    ctx->pc = 0x18D198u;
label_18d198:
    // 0x18d198: 0xc6420490  lwc1        $f2, 0x490($s2)
    ctx->pc = 0x18d198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18d19c: 0x3c023d75  lui         $v0, 0x3D75
    ctx->pc = 0x18d19cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15733 << 16));
    // 0x18d1a0: 0xc6400494  lwc1        $f0, 0x494($s2)
    ctx->pc = 0x18d1a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18d1a4: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x18d1a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x18d1a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18d1a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18d1ac: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x18d1acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x18d1b0: 0x0  nop
    ctx->pc = 0x18d1b0u;
    // NOP
    // 0x18d1b4: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x18d1b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x18d1b8: 0xe6400490  swc1        $f0, 0x490($s2)
    ctx->pc = 0x18d1b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1168), bits); }
    // 0x18d1bc: 0xc642048c  lwc1        $f2, 0x48C($s2)
    ctx->pc = 0x18d1bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18d1c0: 0xc6400494  lwc1        $f0, 0x494($s2)
    ctx->pc = 0x18d1c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18d1c4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x18d1c4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x18d1c8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x18d1c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x18d1cc: 0xe640048c  swc1        $f0, 0x48C($s2)
    ctx->pc = 0x18d1ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1164), bits); }
    // 0x18d1d0: 0xc6400490  lwc1        $f0, 0x490($s2)
    ctx->pc = 0x18d1d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18d1d4: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x18d1d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18d1d8: 0x0  nop
    ctx->pc = 0x18d1d8u;
    // NOP
    // 0x18d1dc: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x18D1DCu;
    {
        const bool branch_taken_0x18d1dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18D1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D1DCu;
        // 0x18d1e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d1dc) {
            ctx->pc = 0x18D220u;
            goto label_18d220;
        }
    }
    ctx->pc = 0x18D1E4u;
    // 0x18d1e4: 0xe6430490  swc1        $f3, 0x490($s2)
    ctx->pc = 0x18d1e4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1168), bits); }
    // 0x18d1e8: 0xc063dd4  jal         func_18F750
    ctx->pc = 0x18D1E8u;
    SET_GPR_U32(ctx, 31, 0x18D1F0u);
    ctx->pc = 0x18D1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D1E8u;
    // 0x18d1ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F750u, 0x18D1E8u, 0x18D1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D1F0u;
label_18d1f0:
    // 0x18d1f0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x18d1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18d1f4: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18D1F4u;
    {
        const bool branch_taken_0x18d1f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x18d1f4) {
            ctx->pc = 0x18D204u;
            goto label_18d204;
        }
    }
    ctx->pc = 0x18D1FCu;
    // 0x18d1fc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x18D1FCu;
    {
        const bool branch_taken_0x18d1fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D1FCu;
        // 0x18d200: 0xae400488  sw          $zero, 0x488($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d1fc) {
            ctx->pc = 0x18D20Cu;
            goto label_18d20c;
        }
    }
    ctx->pc = 0x18D204u;
label_18d204:
    // 0x18d204: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18d204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x18d208: 0xae420488  sw          $v0, 0x488($s2)
    ctx->pc = 0x18d208u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1160), GPR_U32(ctx, 2));
label_18d20c:
    // 0x18d20c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18d20cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d210: 0xc063e08  jal         func_18F820
    ctx->pc = 0x18D210u;
    SET_GPR_U32(ctx, 31, 0x18D218u);
    ctx->pc = 0x18D214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D210u;
    // 0x18d214: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x18D210u, 0x18D218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D218u;
label_18d218:
    // 0x18d218: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x18D218u;
    {
        const bool branch_taken_0x18d218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d218) {
            ctx->pc = 0x18D338u;
            goto label_18d338;
        }
    }
    ctx->pc = 0x18D220u;
label_18d220:
    // 0x18d220: 0xc063dd4  jal         func_18F750
    ctx->pc = 0x18D220u;
    SET_GPR_U32(ctx, 31, 0x18D228u);
    ctx->pc = 0x18F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F750u, 0x18D220u, 0x18D228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D228u;
label_18d228:
    // 0x18d228: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x18d228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18d22c: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x18D22Cu;
    {
        const bool branch_taken_0x18d22c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x18d22c) {
            ctx->pc = 0x18D258u;
            goto label_18d258;
        }
    }
    ctx->pc = 0x18D234u;
    // 0x18d234: 0xc07eea2  jal         func_1FBA88
    ctx->pc = 0x18D234u;
    SET_GPR_U32(ctx, 31, 0x18D23Cu);
    ctx->pc = 0x18D238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D234u;
    // 0x18d238: 0xc64c048c  lwc1        $f12, 0x48C($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBA88u, 0x18D234u, 0x18D23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D23Cu;
label_18d23c:
    // 0x18d23c: 0xc64c0490  lwc1        $f12, 0x490($s2)
    ctx->pc = 0x18d23cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18d240: 0xc07eea2  jal         func_1FBA88
    ctx->pc = 0x18D240u;
    SET_GPR_U32(ctx, 31, 0x18D248u);
    ctx->pc = 0x18D244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D240u;
    // 0x18d244: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBA88u, 0x18D240u, 0x18D248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D248u;
label_18d248:
    // 0x18d248: 0xc07edfe  jal         func_1FB7F8
    ctx->pc = 0x18D248u;
    SET_GPR_U32(ctx, 31, 0x18D250u);
    ctx->pc = 0x18D24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D248u;
    // 0x18d24c: 0x4600a302  mul.s       $f12, $f20, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB7F8u, 0x18D248u, 0x18D250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D250u;
label_18d250:
    // 0x18d250: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x18D250u;
    {
        const bool branch_taken_0x18d250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D250u;
        // 0x18d254: 0xe6400488  swc1        $f0, 0x488($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1160), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d250) {
            ctx->pc = 0x18D338u;
            goto label_18d338;
        }
    }
    ctx->pc = 0x18D258u;
label_18d258:
    // 0x18d258: 0xc07eea2  jal         func_1FBA88
    ctx->pc = 0x18D258u;
    SET_GPR_U32(ctx, 31, 0x18D260u);
    ctx->pc = 0x18D25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D258u;
    // 0x18d25c: 0xc64c048c  lwc1        $f12, 0x48C($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBA88u, 0x18D258u, 0x18D260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D260u;
label_18d260:
    // 0x18d260: 0xc64c0490  lwc1        $f12, 0x490($s2)
    ctx->pc = 0x18d260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18d264: 0xc07eea2  jal         func_1FBA88
    ctx->pc = 0x18D264u;
    SET_GPR_U32(ctx, 31, 0x18D26Cu);
    ctx->pc = 0x18D268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D264u;
    // 0x18d268: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBA88u, 0x18D264u, 0x18D26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D26Cu;
label_18d26c:
    // 0x18d26c: 0xc07edfe  jal         func_1FB7F8
    ctx->pc = 0x18D26Cu;
    SET_GPR_U32(ctx, 31, 0x18D274u);
    ctx->pc = 0x18D270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D26Cu;
    // 0x18d270: 0x4600a302  mul.s       $f12, $f20, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB7F8u, 0x18D26Cu, 0x18D274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D274u;
label_18d274:
    // 0x18d274: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18d274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x18d278: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18d278u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18d27c: 0x0  nop
    ctx->pc = 0x18d27cu;
    // NOP
    // 0x18d280: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x18d280u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x18d284: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x18D284u;
    {
        const bool branch_taken_0x18d284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D284u;
        // 0x18d288: 0xe6400488  swc1        $f0, 0x488($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1160), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d284) {
            ctx->pc = 0x18D338u;
            goto label_18d338;
        }
    }
    ctx->pc = 0x18D28Cu;
label_18d28c:
    // 0x18d28c: 0xc063e08  jal         func_18F820
    ctx->pc = 0x18D28Cu;
    SET_GPR_U32(ctx, 31, 0x18D294u);
    ctx->pc = 0x18D290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D28Cu;
    // 0x18d290: 0xae400490  sw          $zero, 0x490($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 1168), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x18D28Cu, 0x18D294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D294u;
label_18d294:
    // 0x18d294: 0xc6410490  lwc1        $f1, 0x490($s2)
    ctx->pc = 0x18d294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18d298: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18d298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x18d29c: 0xc6400498  lwc1        $f0, 0x498($s2)
    ctx->pc = 0x18d29cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18d2a0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x18d2a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18d2a4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18d2a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18d2a8: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x18d2a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18d2ac: 0x0  nop
    ctx->pc = 0x18d2acu;
    // NOP
    // 0x18d2b0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x18D2B0u;
    {
        const bool branch_taken_0x18d2b0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18D2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D2B0u;
        // 0x18d2b4: 0xe6400490  swc1        $f0, 0x490($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1168), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d2b0) {
            ctx->pc = 0x18D2C8u;
            goto label_18d2c8;
        }
    }
    ctx->pc = 0x18D2B8u;
    // 0x18d2b8: 0xe6420490  swc1        $f2, 0x490($s2)
    ctx->pc = 0x18d2b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1168), bits); }
    // 0x18d2bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18d2bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d2c0: 0xc063e08  jal         func_18F820
    ctx->pc = 0x18D2C0u;
    SET_GPR_U32(ctx, 31, 0x18D2C8u);
    ctx->pc = 0x18D2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D2C0u;
    // 0x18d2c4: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x18D2C0u, 0x18D2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D2C8u;
label_18d2c8:
    // 0x18d2c8: 0xc6410490  lwc1        $f1, 0x490($s2)
    ctx->pc = 0x18d2c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18d2cc: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x18d2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x18d2d0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x18d2d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18d2d4: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x18d2d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x18d2d8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18d2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x18d2dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18d2dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18d2e0: 0x0  nop
    ctx->pc = 0x18d2e0u;
    // NOP
    // 0x18d2e4: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x18d2e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x18d2e8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x18d2e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x18d2ec: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x18d2ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18d2f0: 0x0  nop
    ctx->pc = 0x18d2f0u;
    // NOP
    // 0x18d2f4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x18D2F4u;
    {
        const bool branch_taken_0x18d2f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18d2f4) {
            ctx->pc = 0x18D300u;
            goto label_18d300;
        }
    }
    ctx->pc = 0x18D2FCu;
    // 0x18d2fc: 0x46001806  mov.s       $f0, $f3
    ctx->pc = 0x18d2fcu;
    ctx->f[0] = FPU_MOV_S(ctx->f[3]);
label_18d300:
    // 0x18d300: 0xe64004a0  swc1        $f0, 0x4A0($s2)
    ctx->pc = 0x18d300u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1184), bits); }
    // 0x18d304: 0xe64004a4  swc1        $f0, 0x4A4($s2)
    ctx->pc = 0x18d304u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1188), bits); }
    // 0x18d308: 0xe64004a8  swc1        $f0, 0x4A8($s2)
    ctx->pc = 0x18d308u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1192), bits); }
    // 0x18d30c: 0xe64004bc  swc1        $f0, 0x4BC($s2)
    ctx->pc = 0x18d30cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1212), bits); }
    // 0x18d310: 0xc6400490  lwc1        $f0, 0x490($s2)
    ctx->pc = 0x18d310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18d314: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x18D314u;
    {
        const bool branch_taken_0x18d314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D314u;
        // 0x18d318: 0xe64004cc  swc1        $f0, 0x4CC($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1228), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d314) {
            ctx->pc = 0x18D338u;
            goto label_18d338;
        }
    }
    ctx->pc = 0x18D31Cu;
label_18d31c:
    // 0x18d31c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18d31cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x18d320: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18d320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d324: 0xae4204cc  sw          $v0, 0x4CC($s2)
    ctx->pc = 0x18d324u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1228), GPR_U32(ctx, 2));
    // 0x18d328: 0x8e420454  lw          $v0, 0x454($s2)
    ctx->pc = 0x18d328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1108)));
    // 0x18d32c: 0xae420450  sw          $v0, 0x450($s2)
    ctx->pc = 0x18d32cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1104), GPR_U32(ctx, 2));
    // 0x18d330: 0xc063e34  jal         func_18F8D0
    ctx->pc = 0x18D330u;
    SET_GPR_U32(ctx, 31, 0x18D338u);
    ctx->pc = 0x18D334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D330u;
    // 0x18d334: 0xae402710  sw          $zero, 0x2710($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 10000), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F8D0u, 0x18D330u, 0x18D338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D338u;
label_18d338:
    // 0x18d338: 0xc64c0488  lwc1        $f12, 0x488($s2)
    ctx->pc = 0x18d338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_18d33c:
    // 0x18d33c: 0xc053280  jal         func_14CA00
    ctx->pc = 0x18D33Cu;
    SET_GPR_U32(ctx, 31, 0x18D344u);
    ctx->pc = 0x18D340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D33Cu;
    // 0x18d340: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CA00u, 0x18D33Cu, 0x18D344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D344u;
label_18d344:
    // 0x18d344: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18d344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d348: 0x264504a0  addiu       $a1, $s2, 0x4A0
    ctx->pc = 0x18d348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1184));
    // 0x18d34c: 0xc053320  jal         func_14CC80
    ctx->pc = 0x18D34Cu;
    SET_GPR_U32(ctx, 31, 0x18D354u);
    ctx->pc = 0x18D350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D34Cu;
    // 0x18d350: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CC80u, 0x18D34Cu, 0x18D354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D354u;
label_18d354:
    // 0x18d354: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18d354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d358: 0x264504b0  addiu       $a1, $s2, 0x4B0
    ctx->pc = 0x18d358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1200));
    // 0x18d35c: 0xc053320  jal         func_14CC80
    ctx->pc = 0x18D35Cu;
    SET_GPR_U32(ctx, 31, 0x18D364u);
    ctx->pc = 0x18D360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D35Cu;
    // 0x18d360: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CC80u, 0x18D35Cu, 0x18D364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D364u;
label_18d364:
    // 0x18d364: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18d364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d368: 0x264504c0  addiu       $a1, $s2, 0x4C0
    ctx->pc = 0x18d368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1216));
    // 0x18d36c: 0xc053320  jal         func_14CC80
    ctx->pc = 0x18D36Cu;
    SET_GPR_U32(ctx, 31, 0x18D374u);
    ctx->pc = 0x18D370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D36Cu;
    // 0x18d370: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CC80u, 0x18D36Cu, 0x18D374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D374u;
label_18d374:
    // 0x18d374: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x18d374u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18d378: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x18d378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x18d37c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x18d37cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18d380: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x18d380u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18d384: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x18d384u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18d388: 0x3e00008  jr          $ra
    ctx->pc = 0x18D388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18D38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D388u;
        // 0x18d38c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18D388u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18D390u;
}
