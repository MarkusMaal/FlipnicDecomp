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

// Function: entry_00138db8
// Address: 0x138db8 - 0x138fa4
void entry_00138db8_0x138db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138db8_0x138db8");
#endif

    switch (ctx->pc) {
        case 0x138df8u: goto label_138df8;
        case 0x138e4cu: goto label_138e4c;
        default: break;
    }

    ctx->pc = 0x138db8u;

    // 0x138db8: 0x93a200c0  lbu         $v0, 0xC0($sp)
    ctx->pc = 0x138db8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x138dbc: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x138dbcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x138dc0: 0xafa401d8  sw          $a0, 0x1D8($sp)
    ctx->pc = 0x138dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 472), GPR_U32(ctx, 4));
    // 0x138dc4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x138dc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x138dc8: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x138dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x138dcc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x138dccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138dd0: 0x24080014  addiu       $t0, $zero, 0x14
    ctx->pc = 0x138dd0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x138dd4: 0x3c096c00  lui         $t1, 0x6C00
    ctx->pc = 0x138dd4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)27648 << 16));
    // 0x138dd8: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x138dd8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138ddc: 0x27b101d8  addiu       $s1, $sp, 0x1D8
    ctx->pc = 0x138ddcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 472));
    // 0x138de0: 0x40102d  daddu       $v0, $v0, $zero
    ctx->pc = 0x138de0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138de4: 0xafa20190  sw          $v0, 0x190($sp)
    ctx->pc = 0x138de4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 2));
    // 0x138de8: 0xffa70000  sd          $a3, 0x0($sp)
    ctx->pc = 0x138de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 7));
    // 0x138dec: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x138decu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x138df0: 0xc04e5bc  jal         func_1396F0
    ctx->pc = 0x138DF0u;
    SET_GPR_U32(ctx, 31, 0x138DF8u);
    ctx->pc = 0x138DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138DF0u;
    // 0x138df4: 0xffa70010  sd          $a3, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1396F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1396F0u, 0x138DF0u, 0x138DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138DF8u;
label_138df8:
    // 0x138df8: 0x8fa201d8  lw          $v0, 0x1D8($sp)
    ctx->pc = 0x138df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x138dfc: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x138dfcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x138e00: 0x7ba30190  lq          $v1, 0x190($sp)
    ctx->pc = 0x138e00u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x138e04: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x138e04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x138e08: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x138e08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x138e0c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x138e0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138e10: 0x24080214  addiu       $t0, $zero, 0x214
    ctx->pc = 0x138e10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 532));
    // 0x138e14: 0x3c096c00  lui         $t1, 0x6C00
    ctx->pc = 0x138e14u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)27648 << 16));
    // 0x138e18: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x138e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x138e1c: 0xafa201d8  sw          $v0, 0x1D8($sp)
    ctx->pc = 0x138e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 472), GPR_U32(ctx, 2));
    // 0x138e20: 0x8fa201d8  lw          $v0, 0x1D8($sp)
    ctx->pc = 0x138e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x138e24: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x138e24u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x138e28: 0x8fa201d8  lw          $v0, 0x1D8($sp)
    ctx->pc = 0x138e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x138e2c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x138e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x138e30: 0xafa201d8  sw          $v0, 0x1D8($sp)
    ctx->pc = 0x138e30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 472), GPR_U32(ctx, 2));
    // 0x138e34: 0xffa70000  sd          $a3, 0x0($sp)
    ctx->pc = 0x138e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 7));
    // 0x138e38: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x138e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x138e3c: 0xffa70010  sd          $a3, 0x10($sp)
    ctx->pc = 0x138e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 7));
    // 0x138e40: 0x8fa401d8  lw          $a0, 0x1D8($sp)
    ctx->pc = 0x138e40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x138e44: 0xc04e5bc  jal         func_1396F0
    ctx->pc = 0x138E44u;
    SET_GPR_U32(ctx, 31, 0x138E4Cu);
    ctx->pc = 0x138E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138E44u;
    // 0x138e48: 0x140582d  daddu       $t3, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1396F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1396F0u, 0x138E44u, 0x138E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138E4Cu;
label_138e4c:
    // 0x138e4c: 0x8fa301d8  lw          $v1, 0x1D8($sp)
    ctx->pc = 0x138e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x138e50: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x138e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x138e54: 0x344d0404  ori         $t5, $v0, 0x404
    ctx->pc = 0x138e54u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x138e58: 0x3c0e5000  lui         $t6, 0x5000
    ctx->pc = 0x138e58u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)20480 << 16));
    // 0x138e5c: 0x3c026c02  lui         $v0, 0x6C02
    ctx->pc = 0x138e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27650 << 16));
    // 0x138e60: 0x7bac0190  lq          $t4, 0x190($sp)
    ctx->pc = 0x138e60u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x138e64: 0x34478017  ori         $a3, $v0, 0x8017
    ctx->pc = 0x138e64u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32791);
    // 0x138e68: 0x240a0030  addiu       $t2, $zero, 0x30
    ctx->pc = 0x138e68u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x138e6c: 0x26890020  addiu       $t1, $s4, 0x20
    ctx->pc = 0x138e6cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x138e70: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x138e70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x138e74: 0x3c061400  lui         $a2, 0x1400
    ctx->pc = 0x138e74u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)5120 << 16));
    // 0x138e78: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x138e78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x138e7c: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x138e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x138e80: 0x26840040  addiu       $a0, $s4, 0x40
    ctx->pc = 0x138e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
    // 0x138e84: 0xafa201d8  sw          $v0, 0x1D8($sp)
    ctx->pc = 0x138e84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 472), GPR_U32(ctx, 2));
    // 0x138e88: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x138e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x138e8c: 0x8fab01d8  lw          $t3, 0x1D8($sp)
    ctx->pc = 0x138e8cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x138e90: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x138e90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x138e94: 0x35ce0004  ori         $t6, $t6, 0x4
    ctx->pc = 0x138e94u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)4);
    // 0x138e98: 0x7d6c0000  sq          $t4, 0x0($t3)
    ctx->pc = 0x138e98u;
    WRITE128(ADD32(GPR_U32(ctx, 11), 0), GPR_VEC(ctx, 12));
    // 0x138e9c: 0x8fab01d8  lw          $t3, 0x1D8($sp)
    ctx->pc = 0x138e9cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x138ea0: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x138ea0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x138ea4: 0xafab01d8  sw          $t3, 0x1D8($sp)
    ctx->pc = 0x138ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 472), GPR_U32(ctx, 11));
    // 0x138ea8: 0x8fab01d8  lw          $t3, 0x1D8($sp)
    ctx->pc = 0x138ea8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x138eac: 0xa16a0003  sb          $t2, 0x3($t3)
    ctx->pc = 0x138eacu;
    WRITE8(ADD32(GPR_U32(ctx, 11), 3), (uint8_t)GPR_U32(ctx, 10));
    // 0x138eb0: 0xa1600002  sb          $zero, 0x2($t3)
    ctx->pc = 0x138eb0u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x138eb4: 0xad690004  sw          $t1, 0x4($t3)
    ctx->pc = 0x138eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 9));
    // 0x138eb8: 0xa5680000  sh          $t0, 0x0($t3)
    ctx->pc = 0x138eb8u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x138ebc: 0xad6d0008  sw          $t5, 0x8($t3)
    ctx->pc = 0x138ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 13));
    // 0x138ec0: 0xad67000c  sw          $a3, 0xC($t3)
    ctx->pc = 0x138ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 12), GPR_U32(ctx, 7));
    // 0x138ec4: 0x8fa801d8  lw          $t0, 0x1D8($sp)
    ctx->pc = 0x138ec4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x138ec8: 0x8f8784e0  lw          $a3, -0x7B20($gp)
    ctx->pc = 0x138ec8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935776)));
    // 0x138ecc: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x138eccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x138ed0: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x138ed0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x138ed4: 0xafa801d8  sw          $t0, 0x1D8($sp)
    ctx->pc = 0x138ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 472), GPR_U32(ctx, 8));
    // 0x138ed8: 0x8fa701d8  lw          $a3, 0x1D8($sp)
    ctx->pc = 0x138ed8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x138edc: 0xa0e50003  sb          $a1, 0x3($a3)
    ctx->pc = 0x138edcu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 5));
    // 0x138ee0: 0xa0e00002  sb          $zero, 0x2($a3)
    ctx->pc = 0x138ee0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x138ee4: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x138ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x138ee8: 0xa4e00000  sh          $zero, 0x0($a3)
    ctx->pc = 0x138ee8u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x138eec: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x138eecu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
    // 0x138ef0: 0xace6000c  sw          $a2, 0xC($a3)
    ctx->pc = 0x138ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 6));
    // 0x138ef4: 0x8fa501d8  lw          $a1, 0x1D8($sp)
    ctx->pc = 0x138ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x138ef8: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x138ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x138efc: 0xafa501d8  sw          $a1, 0x1D8($sp)
    ctx->pc = 0x138efcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 472), GPR_U32(ctx, 5));
    // 0x138f00: 0x8fa501d8  lw          $a1, 0x1D8($sp)
    ctx->pc = 0x138f00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x138f04: 0xa0aa0003  sb          $t2, 0x3($a1)
    ctx->pc = 0x138f04u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 10));
    // 0x138f08: 0xa0a00002  sb          $zero, 0x2($a1)
    ctx->pc = 0x138f08u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x138f0c: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x138f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
    // 0x138f10: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x138f10u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x138f14: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x138f14u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x138f18: 0xacae000c  sw          $t6, 0xC($a1)
    ctx->pc = 0x138f18u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 14));
    // 0x138f1c: 0x8fa201d8  lw          $v0, 0x1D8($sp)
    ctx->pc = 0x138f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x138f20: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x138f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x138f24: 0xafa201d8  sw          $v0, 0x1D8($sp)
    ctx->pc = 0x138f24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 472), GPR_U32(ctx, 2));
    // 0x138f28: 0x8e820090  lw          $v0, 0x90($s4)
    ctx->pc = 0x138f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x138f2c: 0x8c420068  lw          $v0, 0x68($v0)
    ctx->pc = 0x138f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x138f30: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x138f30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x138f34: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x138F34u;
    {
        const bool branch_taken_0x138f34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x138f34) {
            ctx->pc = 0x138FA4u;
            return;
        }
    }
    ctx->pc = 0x138F3Cu;
    // 0x138f3c: 0x8f8585b0  lw          $a1, -0x7A50($gp)
    ctx->pc = 0x138f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935984)));
    // 0x138f40: 0x3c026c41  lui         $v0, 0x6C41
    ctx->pc = 0x138f40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27713 << 16));
    // 0x138f44: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x138f44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x138f48: 0x344380bf  ori         $v1, $v0, 0x80BF
    ctx->pc = 0x138f48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32959);
    // 0x138f4c: 0x24040041  addiu       $a0, $zero, 0x41
    ctx->pc = 0x138f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x138f50: 0x344282bf  ori         $v0, $v0, 0x82BF
    ctx->pc = 0x138f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)33471);
    // 0x138f54: 0xa0ca0003  sb          $t2, 0x3($a2)
    ctx->pc = 0x138f54u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 10));
    // 0x138f58: 0xa0c00002  sb          $zero, 0x2($a2)
    ctx->pc = 0x138f58u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x138f5c: 0xacc50004  sw          $a1, 0x4($a2)
    ctx->pc = 0x138f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 5));
    // 0x138f60: 0xa4c40000  sh          $a0, 0x0($a2)
    ctx->pc = 0x138f60u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x138f64: 0xaccd0008  sw          $t5, 0x8($a2)
    ctx->pc = 0x138f64u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 13));
    // 0x138f68: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x138f68u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x138f6c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x138f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x138f70: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x138f70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x138f74: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x138f74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x138f78: 0x8f8385b0  lw          $v1, -0x7A50($gp)
    ctx->pc = 0x138f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935984)));
    // 0x138f7c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x138f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x138f80: 0xa0aa0003  sb          $t2, 0x3($a1)
    ctx->pc = 0x138f80u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 10));
    // 0x138f84: 0xa0a00002  sb          $zero, 0x2($a1)
    ctx->pc = 0x138f84u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x138f88: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x138f88u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x138f8c: 0xa4a40000  sh          $a0, 0x0($a1)
    ctx->pc = 0x138f8cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x138f90: 0xacad0008  sw          $t5, 0x8($a1)
    ctx->pc = 0x138f90u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 13));
    // 0x138f94: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x138f94u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x138f98: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x138f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x138f9c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x138f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x138fa0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x138fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x138fa4u;
}
