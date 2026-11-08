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

// Function: FUN_0017c1c0
// Address: 0x17c1c0 - 0x17c260
void FUN_0017c1c0_0x17c1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017c1c0_0x17c1c0");
#endif

    switch (ctx->pc) {
        case 0x17c1d4u: goto label_17c1d4;
        default: break;
    }

    ctx->pc = 0x17c1c0u;

    // 0x17c1c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17c1c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17c1c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17c1c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17c1c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17c1c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17c1cc: 0xc0563cc  jal         func_158F30
    ctx->pc = 0x17C1CCu;
    SET_GPR_U32(ctx, 31, 0x17C1D4u);
    ctx->pc = 0x17C1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C1CCu;
    // 0x17c1d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158F30u, 0x17C1CCu, 0x17C1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C1D4u;
label_17c1d4:
    // 0x17c1d4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x17c1d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17c1d8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x17c1d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17c1dc: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x17c1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x17c1e0: 0x240307f8  addiu       $v1, $zero, 0x7F8
    ctx->pc = 0x17c1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2040));
    // 0x17c1e4: 0xc4a00058  lwc1        $f0, 0x58($a1)
    ctx->pc = 0x17c1e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c1e8: 0xe6000224  swc1        $f0, 0x224($s0)
    ctx->pc = 0x17c1e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 548), bits); }
    // 0x17c1ec: 0xa600022a  sh          $zero, 0x22A($s0)
    ctx->pc = 0x17c1ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 554), (uint16_t)GPR_U32(ctx, 0));
    // 0x17c1f0: 0xa6000228  sh          $zero, 0x228($s0)
    ctx->pc = 0x17c1f0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 552), (uint16_t)GPR_U32(ctx, 0));
    // 0x17c1f4: 0xa600022c  sh          $zero, 0x22C($s0)
    ctx->pc = 0x17c1f4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 556), (uint16_t)GPR_U32(ctx, 0));
    // 0x17c1f8: 0xa600022e  sh          $zero, 0x22E($s0)
    ctx->pc = 0x17c1f8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 558), (uint16_t)GPR_U32(ctx, 0));
    // 0x17c1fc: 0xa206007b  sb          $a2, 0x7B($s0)
    ctx->pc = 0x17c1fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 123), (uint8_t)GPR_U32(ctx, 6));
    // 0x17c200: 0xc6000224  lwc1        $f0, 0x224($s0)
    ctx->pc = 0x17c200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c204: 0xe6000220  swc1        $f0, 0x220($s0)
    ctx->pc = 0x17c204u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 544), bits); }
    // 0x17c208: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x17c208u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17c20c: 0x80e50022  lb          $a1, 0x22($a3)
    ctx->pc = 0x17c20cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 34)));
    // 0x17c210: 0xa6050230  sh          $a1, 0x230($s0)
    ctx->pc = 0x17c210u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 560), (uint16_t)GPR_U32(ctx, 5));
    // 0x17c214: 0xa6060232  sh          $a2, 0x232($s0)
    ctx->pc = 0x17c214u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 562), (uint16_t)GPR_U32(ctx, 6));
    // 0x17c218: 0x90e50024  lbu         $a1, 0x24($a3)
    ctx->pc = 0x17c218u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x17c21c: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x17c21cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x17c220: 0xa6050236  sh          $a1, 0x236($s0)
    ctx->pc = 0x17c220u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 566), (uint16_t)GPR_U32(ctx, 5));
    // 0x17c224: 0xa6040238  sh          $a0, 0x238($s0)
    ctx->pc = 0x17c224u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 568), (uint16_t)GPR_U32(ctx, 4));
    // 0x17c228: 0x90e40023  lbu         $a0, 0x23($a3)
    ctx->pc = 0x17c228u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 35)));
    // 0x17c22c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x17c22cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x17c230: 0xa6040234  sh          $a0, 0x234($s0)
    ctx->pc = 0x17c230u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 564), (uint16_t)GPR_U32(ctx, 4));
    // 0x17c234: 0x86040234  lh          $a0, 0x234($s0)
    ctx->pc = 0x17c234u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 564)));
    // 0x17c238: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x17C238u;
    {
        const bool branch_taken_0x17c238 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x17C23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C238u;
        // 0x17c23c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c238) {
            ctx->pc = 0x17C24Cu;
            goto label_17c24c;
        }
    }
    ctx->pc = 0x17C240u;
    // 0x17c240: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x17c240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17c244: 0xa6030234  sh          $v1, 0x234($s0)
    ctx->pc = 0x17c244u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 564), (uint16_t)GPR_U32(ctx, 3));
    // 0x17c248: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17c248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17c24c:
    // 0x17c24c: 0xa2030078  sb          $v1, 0x78($s0)
    ctx->pc = 0x17c24cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 120), (uint8_t)GPR_U32(ctx, 3));
    // 0x17c250: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17c250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17c254: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17c254u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c258: 0x3e00008  jr          $ra
    ctx->pc = 0x17C258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C258u;
        // 0x17c25c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C258u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17C260u;
}
