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

// Function: entry_001bdb0c
// Address: 0x1bdb0c - 0x1bdbc4
void entry_001bdb0c_0x1bdb0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bdb0c_0x1bdb0c");
#endif

    switch (ctx->pc) {
        case 0x1bdb48u: goto label_1bdb48;
        case 0x1bdb54u: goto label_1bdb54;
        case 0x1bdb8cu: goto label_1bdb8c;
        case 0x1bdb98u: goto label_1bdb98;
        default: break;
    }

    ctx->pc = 0x1bdb0cu;

    // 0x1bdb0c: 0x0  nop
    ctx->pc = 0x1bdb0cu;
    // NOP
    // 0x1bdb10: 0x8fa700f8  lw          $a3, 0xF8($sp)
    ctx->pc = 0x1bdb10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1bdb14: 0x8fa300fc  lw          $v1, 0xFC($sp)
    ctx->pc = 0x1bdb14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x1bdb18: 0x27a40108  addiu       $a0, $sp, 0x108
    ctx->pc = 0x1bdb18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x1bdb1c: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1bdb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1bdb20: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1bdb20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdb24: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bdb24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdb28: 0xafa700c8  sw          $a3, 0xC8($sp)
    ctx->pc = 0x1bdb28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 7));
    // 0x1bdb2c: 0xafa300cc  sw          $v1, 0xCC($sp)
    ctx->pc = 0x1bdb2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 3));
    // 0x1bdb30: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x1bdb30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x1bdb34: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x1bdb34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1bdb38: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x1bdb38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x1bdb3c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1bdb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1bdb40: 0xc04fcc4  jal         func_13F310
    ctx->pc = 0x1BDB40u;
    SET_GPR_U32(ctx, 31, 0x1BDB48u);
    ctx->pc = 0x1BDB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDB40u;
    // 0x1bdb44: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F310u, 0x1BDB40u, 0x1BDB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDB48u;
label_1bdb48:
    // 0x1bdb48: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x1bdb48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x1bdb4c: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x1BDB4Cu;
    SET_GPR_U32(ctx, 31, 0x1BDB54u);
    ctx->pc = 0x1BDB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDB4Cu;
    // 0x1bdb50: 0x27a50108  addiu       $a1, $sp, 0x108 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x1BDB4Cu, 0x1BDB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDB54u;
label_1bdb54:
    // 0x1bdb54: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x1bdb54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x1bdb58: 0x27a600e8  addiu       $a2, $sp, 0xE8
    ctx->pc = 0x1bdb58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x1bdb5c: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x1bdb5cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1bdb60: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x1bdb60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bdb64: 0x27a300c8  addiu       $v1, $sp, 0xC8
    ctx->pc = 0x1bdb64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x1bdb68: 0x27a500d8  addiu       $a1, $sp, 0xD8
    ctx->pc = 0x1bdb68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x1bdb6c: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x1bdb6cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x1bdb70: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1bdb70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1bdb74: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x1bdb74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x1bdb78: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x1bdb78u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bdb7c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1bdb7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bdb80: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x1bdb80u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x1bdb84: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x1BDB84u;
    SET_GPR_U32(ctx, 31, 0x1BDB8Cu);
    ctx->pc = 0x1BDB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDB84u;
    // 0x1bdb88: 0xe4a00008  swc1        $f0, 0x8($a1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x1BDB84u, 0x1BDB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDB8Cu;
label_1bdb8c:
    // 0x1bdb8c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1bdb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1bdb90: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x1BDB90u;
    SET_GPR_U32(ctx, 31, 0x1BDB98u);
    ctx->pc = 0x1BDB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDB90u;
    // 0x1bdb94: 0x27a500e8  addiu       $a1, $sp, 0xE8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x1BDB90u, 0x1BDB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDB98u;
label_1bdb98:
    // 0x1bdb98: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x1bdb98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1bdb9c: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1bdb9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1bdba0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1bdba0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bdba4: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x1bdba4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1bdba8: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x1bdba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1bdbac: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x1bdbacu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x1bdbb0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1bdbb0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bdbb4: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x1bdbb4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x1bdbb8: 0x83a7011c  lb          $a3, 0x11C($sp)
    ctx->pc = 0x1bdbb8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x1bdbbc: 0xc06f838  jal         func_1BE0E0
    ctx->pc = 0x1BDBBCu;
    SET_GPR_U32(ctx, 31, 0x1BDBC4u);
    ctx->pc = 0x1BDBC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDBBCu;
    // 0x1bdbc0: 0x26a40004  addiu       $a0, $s5, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE0E0u, 0x1BDBBCu, 0x1BDBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDBC4u;
}
