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

// Function: FUN_001ba640
// Address: 0x1ba640 - 0x1ba760
void FUN_001ba640_0x1ba640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ba640_0x1ba640");
#endif

    ctx->pc = 0x1ba640u;

    // 0x1ba640: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1ba640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1ba644: 0x10600044  beqz        $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x1BA644u;
    {
        const bool branch_taken_0x1ba644 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba644) {
            ctx->pc = 0x1BA758u;
            goto label_1ba758;
        }
    }
    ctx->pc = 0x1BA64Cu;
    // 0x1ba64c: 0xac8500e4  sw          $a1, 0xE4($a0)
    ctx->pc = 0x1ba64cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 228), GPR_U32(ctx, 5));
    // 0x1ba650: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1ba650u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ba654: 0xe48c00e8  swc1        $f12, 0xE8($a0)
    ctx->pc = 0x1ba654u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 232), bits); }
    // 0x1ba658: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ba658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ba65c: 0xac8600ec  sw          $a2, 0xEC($a0)
    ctx->pc = 0x1ba65cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 236), GPR_U32(ctx, 6));
    // 0x1ba660: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ba660u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ba664: 0xac8700f0  sw          $a3, 0xF0($a0)
    ctx->pc = 0x1ba664u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 240), GPR_U32(ctx, 7));
    // 0x1ba668: 0x8c86000c  lw          $a2, 0xC($a0)
    ctx->pc = 0x1ba668u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1ba66c: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x1ba66cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x1ba670: 0x8cc90040  lw          $t1, 0x40($a2)
    ctx->pc = 0x1ba670u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 64)));
    // 0x1ba674: 0x8cc70048  lw          $a3, 0x48($a2)
    ctx->pc = 0x1ba674u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 72)));
    // 0x1ba678: 0x8cca0044  lw          $t2, 0x44($a2)
    ctx->pc = 0x1ba678u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 68)));
    // 0x1ba67c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ba67cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1ba680: 0x1274021  addu        $t0, $t1, $a3
    ctx->pc = 0x1ba680u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x1ba684: 0x8cc6004c  lw          $a2, 0x4C($a2)
    ctx->pc = 0x1ba684u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 76)));
    // 0x1ba688: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x1ba688u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x1ba68c: 0x10a30029  beq         $a1, $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x1BA68Cu;
    {
        const bool branch_taken_0x1ba68c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1BA690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA68Cu;
        // 0x1ba690: 0x1463021  addu        $a2, $t2, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba68c) {
            ctx->pc = 0x1BA734u;
            goto label_1ba734;
        }
    }
    ctx->pc = 0x1BA694u;
    // 0x1ba694: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1ba694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ba698: 0x10a3001c  beq         $a1, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x1BA698u;
    {
        const bool branch_taken_0x1ba698 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1BA69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA698u;
        // 0x1ba69c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba698) {
            ctx->pc = 0x1BA70Cu;
            goto label_1ba70c;
        }
    }
    ctx->pc = 0x1BA6A0u;
    // 0x1ba6a0: 0x10a30010  beq         $a1, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1BA6A0u;
    {
        const bool branch_taken_0x1ba6a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1ba6a0) {
            ctx->pc = 0x1BA6E4u;
            goto label_1ba6e4;
        }
    }
    ctx->pc = 0x1BA6A8u;
    // 0x1ba6a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ba6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ba6ac: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BA6ACu;
    {
        const bool branch_taken_0x1ba6ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1ba6ac) {
            ctx->pc = 0x1BA6BCu;
            goto label_1ba6bc;
        }
    }
    ctx->pc = 0x1BA6B4u;
    // 0x1ba6b4: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1BA6B4u;
    {
        const bool branch_taken_0x1ba6b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba6b4) {
            ctx->pc = 0x1BA758u;
            goto label_1ba758;
        }
    }
    ctx->pc = 0x1BA6BCu;
label_1ba6bc:
    // 0x1ba6bc: 0x1272823  subu        $a1, $t1, $a3
    ctx->pc = 0x1ba6bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x1ba6c0: 0x1071823  subu        $v1, $t0, $a3
    ctx->pc = 0x1ba6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x1ba6c4: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x1ba6c4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ba6c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ba6c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ba6cc: 0x0  nop
    ctx->pc = 0x1ba6ccu;
    // NOP
    // 0x1ba6d0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ba6d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ba6d4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ba6d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ba6d8: 0xe4810020  swc1        $f1, 0x20($a0)
    ctx->pc = 0x1ba6d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x1ba6dc: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1BA6DCu;
    {
        const bool branch_taken_0x1ba6dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA6DCu;
        // 0x1ba6e0: 0xe4800030  swc1        $f0, 0x30($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba6dc) {
            ctx->pc = 0x1BA758u;
            goto label_1ba758;
        }
    }
    ctx->pc = 0x1BA6E4u;
label_1ba6e4:
    // 0x1ba6e4: 0x1272821  addu        $a1, $t1, $a3
    ctx->pc = 0x1ba6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x1ba6e8: 0x1071821  addu        $v1, $t0, $a3
    ctx->pc = 0x1ba6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x1ba6ec: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x1ba6ecu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ba6f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ba6f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ba6f4: 0x0  nop
    ctx->pc = 0x1ba6f4u;
    // NOP
    // 0x1ba6f8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ba6f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ba6fc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ba6fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ba700: 0xe4810020  swc1        $f1, 0x20($a0)
    ctx->pc = 0x1ba700u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x1ba704: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1BA704u;
    {
        const bool branch_taken_0x1ba704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA704u;
        // 0x1ba708: 0xe4800030  swc1        $f0, 0x30($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba704) {
            ctx->pc = 0x1BA758u;
            goto label_1ba758;
        }
    }
    ctx->pc = 0x1BA70Cu;
label_1ba70c:
    // 0x1ba70c: 0x1472823  subu        $a1, $t2, $a3
    ctx->pc = 0x1ba70cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x1ba710: 0xc71823  subu        $v1, $a2, $a3
    ctx->pc = 0x1ba710u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1ba714: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x1ba714u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ba718: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ba718u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ba71c: 0x0  nop
    ctx->pc = 0x1ba71cu;
    // NOP
    // 0x1ba720: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ba720u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ba724: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ba724u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ba728: 0xe4810024  swc1        $f1, 0x24($a0)
    ctx->pc = 0x1ba728u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x1ba72c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1BA72Cu;
    {
        const bool branch_taken_0x1ba72c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA72Cu;
        // 0x1ba730: 0xe4800034  swc1        $f0, 0x34($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba72c) {
            ctx->pc = 0x1BA758u;
            goto label_1ba758;
        }
    }
    ctx->pc = 0x1BA734u;
label_1ba734:
    // 0x1ba734: 0x1472821  addu        $a1, $t2, $a3
    ctx->pc = 0x1ba734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x1ba738: 0xc71821  addu        $v1, $a2, $a3
    ctx->pc = 0x1ba738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1ba73c: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x1ba73cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ba740: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ba740u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ba744: 0x0  nop
    ctx->pc = 0x1ba744u;
    // NOP
    // 0x1ba748: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ba748u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ba74c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ba74cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ba750: 0xe4810024  swc1        $f1, 0x24($a0)
    ctx->pc = 0x1ba750u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x1ba754: 0xe4800034  swc1        $f0, 0x34($a0)
    ctx->pc = 0x1ba754u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
label_1ba758:
    // 0x1ba758: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BA758u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BA760u;
}
