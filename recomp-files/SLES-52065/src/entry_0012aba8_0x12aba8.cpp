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

// Function: entry_0012aba8
// Address: 0x12aba8 - 0x12ac54
void entry_0012aba8_0x12aba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012aba8_0x12aba8");
#endif

    switch (ctx->pc) {
        case 0x12abbcu: goto label_12abbc;
        case 0x12abd8u: goto label_12abd8;
        case 0x12ac14u: goto label_12ac14;
        default: break;
    }

    ctx->pc = 0x12aba8u;

    // 0x12aba8: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x12aba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x12abac: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x12abacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x12abb0: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x12abb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x12abb4: 0xc04eacc  jal         func_13AB30
    ctx->pc = 0x12ABB4u;
    SET_GPR_U32(ctx, 31, 0x12ABBCu);
    ctx->pc = 0x12ABB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12ABB4u;
    // 0x12abb8: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AB30u, 0x12ABB4u, 0x12ABBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12ABBCu;
label_12abbc:
    // 0x12abbc: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x12abbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x12abc0: 0x2442ec30  addiu       $v0, $v0, -0x13D0
    ctx->pc = 0x12abc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962224));
    // 0x12abc4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x12abc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x12abc8: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x12abc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12abcc: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x12abccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12abd0: 0xc07edfe  jal         func_1FB7F8
    ctx->pc = 0x12ABD0u;
    SET_GPR_U32(ctx, 31, 0x12ABD8u);
    ctx->pc = 0x12ABD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12ABD0u;
    // 0x12abd4: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB7F8u, 0x12ABD0u, 0x12ABD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12ABD8u;
label_12abd8:
    // 0x12abd8: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x12abd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x12abdc: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x12abdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x12abe0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x12abe0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12abe4: 0x0  nop
    ctx->pc = 0x12abe4u;
    // NOP
    // 0x12abe8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x12abe8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12abec: 0x0  nop
    ctx->pc = 0x12abecu;
    // NOP
    // 0x12abf0: 0x45000018  bc1f        . + 4 + (0x18 << 2)
    ctx->pc = 0x12ABF0u;
    {
        const bool branch_taken_0x12abf0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12abf0) {
            ctx->pc = 0x12AC54u;
            return;
        }
    }
    ctx->pc = 0x12ABF8u;
    // 0x12abf8: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x12abf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x12abfc: 0x2442ec40  addiu       $v0, $v0, -0x13C0
    ctx->pc = 0x12abfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962240));
    // 0x12ac00: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x12ac00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x12ac04: 0xc7a10124  lwc1        $f1, 0x124($sp)
    ctx->pc = 0x12ac04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12ac08: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x12ac08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12ac0c: 0xc07edfe  jal         func_1FB7F8
    ctx->pc = 0x12AC0Cu;
    SET_GPR_U32(ctx, 31, 0x12AC14u);
    ctx->pc = 0x12AC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AC0Cu;
    // 0x12ac10: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB7F8u, 0x12AC0Cu, 0x12AC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AC14u;
label_12ac14:
    // 0x12ac14: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x12ac14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x12ac18: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x12ac18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x12ac1c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x12ac1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12ac20: 0x0  nop
    ctx->pc = 0x12ac20u;
    // NOP
    // 0x12ac24: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x12ac24u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12ac28: 0x0  nop
    ctx->pc = 0x12ac28u;
    // NOP
    // 0x12ac2c: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x12AC2Cu;
    {
        const bool branch_taken_0x12ac2c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12ac2c) {
            ctx->pc = 0x12AC54u;
            return;
        }
    }
    ctx->pc = 0x12AC34u;
    // 0x12ac34: 0x141180  sll         $v0, $s4, 6
    ctx->pc = 0x12ac34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 6));
    // 0x12ac38: 0x2f01821  addu        $v1, $s7, $s0
    ctx->pc = 0x12ac38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
    // 0x12ac3c: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x12ac3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x12ac40: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x12ac40u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x12ac44: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x12ac44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x12ac48: 0x3d22821  addu        $a1, $fp, $s2
    ctx->pc = 0x12ac48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 18)));
    // 0x12ac4c: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x12AC4Cu;
    SET_GPR_U32(ctx, 31, 0x12AC54u);
    ctx->pc = 0x12AC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AC4Cu;
    // 0x12ac50: 0x24440080  addiu       $a0, $v0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x12AC4Cu, 0x12AC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AC54u;
}
