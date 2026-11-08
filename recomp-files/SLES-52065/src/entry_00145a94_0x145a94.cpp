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

// Function: entry_00145a94
// Address: 0x145a94 - 0x145b4c
void entry_00145a94_0x145a94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00145a94_0x145a94");
#endif

    switch (ctx->pc) {
        case 0x145ad0u: goto label_145ad0;
        case 0x145adcu: goto label_145adc;
        case 0x145b14u: goto label_145b14;
        case 0x145b20u: goto label_145b20;
        default: break;
    }

    ctx->pc = 0x145a94u;

    // 0x145a94: 0x0  nop
    ctx->pc = 0x145a94u;
    // NOP
    // 0x145a98: 0x8fa70118  lw          $a3, 0x118($sp)
    ctx->pc = 0x145a98u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x145a9c: 0x8fa3011c  lw          $v1, 0x11C($sp)
    ctx->pc = 0x145a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x145aa0: 0x27a40128  addiu       $a0, $sp, 0x128
    ctx->pc = 0x145aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 296));
    // 0x145aa4: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x145aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x145aa8: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x145aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x145aac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x145aacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145ab0: 0xafa700e8  sw          $a3, 0xE8($sp)
    ctx->pc = 0x145ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 7));
    // 0x145ab4: 0xafa300ec  sw          $v1, 0xEC($sp)
    ctx->pc = 0x145ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 3));
    // 0x145ab8: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x145ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
    // 0x145abc: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x145abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x145ac0: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x145ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x145ac4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x145ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x145ac8: 0xc04fcc4  jal         func_13F310
    ctx->pc = 0x145AC8u;
    SET_GPR_U32(ctx, 31, 0x145AD0u);
    ctx->pc = 0x145ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145AC8u;
    // 0x145acc: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F310u, 0x145AC8u, 0x145AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145AD0u;
label_145ad0:
    // 0x145ad0: 0x27a400d8  addiu       $a0, $sp, 0xD8
    ctx->pc = 0x145ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x145ad4: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x145AD4u;
    SET_GPR_U32(ctx, 31, 0x145ADCu);
    ctx->pc = 0x145AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145AD4u;
    // 0x145ad8: 0x27a50128  addiu       $a1, $sp, 0x128 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x145AD4u, 0x145ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145ADCu;
label_145adc:
    // 0x145adc: 0x27a400d8  addiu       $a0, $sp, 0xD8
    ctx->pc = 0x145adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x145ae0: 0x27a60108  addiu       $a2, $sp, 0x108
    ctx->pc = 0x145ae0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x145ae4: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x145ae4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x145ae8: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x145ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145aec: 0x27a300e8  addiu       $v1, $sp, 0xE8
    ctx->pc = 0x145aecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x145af0: 0x27a500f8  addiu       $a1, $sp, 0xF8
    ctx->pc = 0x145af0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x145af4: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x145af4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x145af8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x145af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x145afc: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x145afcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x145b00: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x145b00u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x145b04: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x145b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145b08: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x145b08u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x145b0c: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x145B0Cu;
    SET_GPR_U32(ctx, 31, 0x145B14u);
    ctx->pc = 0x145B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145B0Cu;
    // 0x145b10: 0xe4a00008  swc1        $f0, 0x8($a1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x145B0Cu, 0x145B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145B14u;
label_145b14:
    // 0x145b14: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x145b14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x145b18: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x145B18u;
    SET_GPR_U32(ctx, 31, 0x145B20u);
    ctx->pc = 0x145B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145B18u;
    // 0x145b1c: 0x27a50108  addiu       $a1, $sp, 0x108 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x145B18u, 0x145B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145B20u;
label_145b20:
    // 0x145b20: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x145b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x145b24: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x145b24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x145b28: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x145b28u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x145b2c: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x145b2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x145b30: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x145b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x145b34: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x145b34u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x145b38: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x145b38u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x145b3c: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x145b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x145b40: 0x83a7013c  lb          $a3, 0x13C($sp)
    ctx->pc = 0x145b40u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x145b44: 0xc051740  jal         func_145D00
    ctx->pc = 0x145B44u;
    SET_GPR_U32(ctx, 31, 0x145B4Cu);
    ctx->pc = 0x145B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145B44u;
    // 0x145b48: 0x26a40004  addiu       $a0, $s5, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145D00u, 0x145B44u, 0x145B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145B4Cu;
}
