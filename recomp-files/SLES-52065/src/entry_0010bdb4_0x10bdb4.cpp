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

// Function: entry_0010bdb4
// Address: 0x10bdb4 - 0x10be4c
void entry_0010bdb4_0x10bdb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010bdb4_0x10bdb4");
#endif

    switch (ctx->pc) {
        case 0x10bddcu: goto label_10bddc;
        case 0x10be04u: goto label_10be04;
        case 0x10be30u: goto label_10be30;
        case 0x10be44u: goto label_10be44;
        default: break;
    }

    ctx->pc = 0x10bdb4u;

label_10bdb4:
    // 0x10bdb4: 0x2541021  addu        $v0, $s2, $s4
    ctx->pc = 0x10bdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
label_10bdb8:
    // 0x10bdb8: 0x24500280  addiu       $s0, $v0, 0x280
    ctx->pc = 0x10bdb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
label_10bdbc:
    // 0x10bdbc: 0x8c420650  lw          $v0, 0x650($v0)
    ctx->pc = 0x10bdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1616)));
label_10bdc0:
    // 0x10bdc0: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_10bdc4:
    if (ctx->pc == 0x10BDC4u) {
        ctx->pc = 0x10BDC8u;
        goto label_10bdc8;
    }
    ctx->pc = 0x10BDC0u;
    {
        const bool branch_taken_0x10bdc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10bdc0) {
            ctx->pc = 0x10BE68u;
            return;
        }
    }
    ctx->pc = 0x10BDC8u;
label_10bdc8:
    // 0x10bdc8: 0x8e990008  lw          $t9, 0x8($s4)
    ctx->pc = 0x10bdc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_10bdcc:
    // 0x10bdcc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x10bdccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_10bdd0:
    // 0x10bdd0: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x10bdd0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_10bdd4:
    // 0x10bdd4: 0x320f809  jalr        $t9
label_10bdd8:
    if (ctx->pc == 0x10BDD8u) {
        ctx->pc = 0x10BDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BDD4u;
        // 0x10bdd8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10BDDCu;
        goto label_10bddc;
    }
    ctx->pc = 0x10BDD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10BDDCu);
        ctx->pc = 0x10BDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BDD4u;
        // 0x10bdd8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10BDD4u, 0x10BDDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10BDDCu;
label_10bddc:
    // 0x10bddc: 0xc66c01c0  lwc1        $f12, 0x1C0($s3)
    ctx->pc = 0x10bddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_10bde0:
    // 0x10bde0: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x10bde0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_10bde4:
    // 0x10bde4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x10bde4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_10bde8:
    // 0x10bde8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10bde8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_10bdec:
    // 0x10bdec: 0x26650300  addiu       $a1, $s3, 0x300
    ctx->pc = 0x10bdecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 768));
label_10bdf0:
    // 0x10bdf0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x10bdf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10bdf4:
    // 0x10bdf4: 0x26070300  addiu       $a3, $s0, 0x300
    ctx->pc = 0x10bdf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
label_10bdf8:
    // 0x10bdf8: 0x26680290  addiu       $t0, $s3, 0x290
    ctx->pc = 0x10bdf8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 656));
label_10bdfc:
    // 0x10bdfc: 0xc055160  jal         func_154580
label_10be00:
    if (ctx->pc == 0x10BE00u) {
        ctx->pc = 0x10BE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BDFCu;
        // 0x10be00: 0x26090290  addiu       $t1, $s0, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 656));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10BE04u;
        goto label_10be04;
    }
    ctx->pc = 0x10BDFCu;
    SET_GPR_U32(ctx, 31, 0x10BE04u);
    ctx->pc = 0x10BE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BDFCu;
    // 0x10be00: 0x26090290  addiu       $t1, $s0, 0x290 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154580u, 0x10BDFCu, 0x10BE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BE04u;
label_10be04:
    // 0x10be04: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x10be04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_10be08:
    // 0x10be08: 0x0  nop
    ctx->pc = 0x10be08u;
    // NOP
label_10be0c:
    // 0x10be0c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x10be0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_10be10:
    // 0x10be10: 0x0  nop
    ctx->pc = 0x10be10u;
    // NOP
label_10be14:
    // 0x10be14: 0x4501000d  bc1t        . + 4 + (0xD << 2)
label_10be18:
    if (ctx->pc == 0x10BE18u) {
        ctx->pc = 0x10BE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BE14u;
        // 0x10be18: 0x3c023e99  lui         $v0, 0x3E99 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10BE1Cu;
        goto label_10be1c;
    }
    ctx->pc = 0x10BE14u;
    {
        const bool branch_taken_0x10be14 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x10BE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BE14u;
        // 0x10be18: 0x3c023e99  lui         $v0, 0x3E99 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10be14) {
            ctx->pc = 0x10BE4Cu;
            return;
        }
    }
    ctx->pc = 0x10BE1Cu;
label_10be1c:
    // 0x10be1c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10be1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_10be20:
    // 0x10be20: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x10be20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_10be24:
    // 0x10be24: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x10be24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_10be28:
    // 0x10be28: 0xc056194  jal         func_158650
label_10be2c:
    if (ctx->pc == 0x10BE2Cu) {
        ctx->pc = 0x10BE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BE28u;
        // 0x10be2c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10BE30u;
        goto label_10be30;
    }
    ctx->pc = 0x10BE28u;
    SET_GPR_U32(ctx, 31, 0x10BE30u);
    ctx->pc = 0x10BE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BE28u;
    // 0x10be2c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x158650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158650u, 0x10BE28u, 0x10BE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BE30u;
label_10be30:
    // 0x10be30: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x10be30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_10be34:
    // 0x10be34: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x10be34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_10be38:
    // 0x10be38: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x10be38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_10be3c:
    // 0x10be3c: 0xc056194  jal         func_158650
label_10be40:
    if (ctx->pc == 0x10BE40u) {
        ctx->pc = 0x10BE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BE3Cu;
        // 0x10be40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10BE44u;
        goto label_10be44;
    }
    ctx->pc = 0x10BE3Cu;
    SET_GPR_U32(ctx, 31, 0x10BE44u);
    ctx->pc = 0x10BE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BE3Cu;
    // 0x10be40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158650u, 0x10BE3Cu, 0x10BE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BE44u;
label_10be44:
    // 0x10be44: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x10be44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_10be48:
    // 0x10be48: 0xae0203d0  sw          $v0, 0x3D0($s0)
    ctx->pc = 0x10be48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 976), GPR_U32(ctx, 2));
    ctx->pc = 0x10be4cu;
}
